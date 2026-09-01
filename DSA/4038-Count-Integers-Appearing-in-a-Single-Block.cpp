class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        
        unordered_map<int,int> freq,first,last;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(!first.count(nums[i])) first[nums[i]]=i;
            last[nums[i]]=i;
        }
        int cnt=0;
            for(auto& [val,f]:freq){
                if(last[val]-first[val]+1==f) cnt++;
            }
        return cnt;
    }
};