class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int cnt=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k) cnt++;
        //     }
        // }
        // return cnt;
        //Optimal approach
        int count=0;
        unordered_map<int,int>mp;
        vector<int>prefixSum(nums.size(),0);
        prefixSum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(prefixSum[i]==k) count++;
            int val=prefixSum[i]-k;
            if(mp.find(val)!=mp.end()) count+=mp[val];
            if(mp.find(prefixSum[i])==mp.end()) mp[prefixSum[i]]=0;
            mp[prefixSum[i]]++;
        }
        return count;
    }
};