class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int cnt=nums.size();
       
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int mini=nums[i];
            for(int j=i+1;j<nums.size();j++){
                a=a&nums[j];
                mini=min(mini,nums[j]);
                if(a==mini) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};