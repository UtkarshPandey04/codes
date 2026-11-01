class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long mini=LLONG_MAX;
        for(int i=0;i<nums.size()-1;i+=2){
            string numb=to_string(nums[i+1]);
            int digit=numb.length();
            int temp=nums[i+1];
            long long mu=10;
            while(temp>=10){
                mu*=10;
                temp=temp/10;
            }
            long long summ=1LL*nums[i]*mu+nums[i+1];
            mini=min(mini,summ);
        }
        return mini;
    }
};