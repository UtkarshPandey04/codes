class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN;
        double sum=0.0;
        double average=0.0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=k) sum=sum-nums[i-k];
            if(i>=k-1) 
            {average=sum/(double)k;
            maxi=max(average,maxi);
            }
        }
        return maxi;
    }
};