class Solution {
public:
int chk(vector<int>& nums, long long mid){
    int subarray=1;
    long long sum=0;
    for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=mid){
            sum+=nums[i];
        }
        else{
            subarray++;
            sum=nums[i];
        }
    }
    return subarray;
}
    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0LL);
        while(low<=high){
            long long mid=low+(high-low)/2;
            int check=chk(nums,mid);
            if(check>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return (int)low;
    }
};