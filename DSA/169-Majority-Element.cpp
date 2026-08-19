class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int cnt=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]==nums[j]) cnt++;
        //     }
        //     if(cnt>nums.size()/2) ans= nums[i];
            
        // }
        // return ans;
        int majEle=0;
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto &it:ans){
            if(it.second>nums.size()/2) majEle=it.first;
        }
        return majEle;

        //more optimal approach:
        int candidate;
        int count=0;
        for(int i:nums){
            if(count==0) candidate=i;
            else if(i==candidate) count++;
            else count--;
        }
        return count;
    }
};