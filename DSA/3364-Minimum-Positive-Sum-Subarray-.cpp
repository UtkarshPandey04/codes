class Solution {
public:
    int minSum(vector<int>& nums, int k){
        int l=0;
        int sum=0;
        int mini=INT_MAX;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            if(r-l+1==k){
                if (sum > 0)
                    mini = min(mini, sum);
                sum-=nums[l];
                l++;
            }
        }
        return mini;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        for (int k = l; k <= r; k++) {
            mini = min(mini, minSum(nums, k));
        }

        return mini == INT_MAX ? -1 : mini;
    }
};