class Solution {
public:
    int sumD(vector<int>& nums, int mid){
        int sum=0;
        for(int j=0;j<nums.size();j++){
            sum+=ceil((double)nums[j]/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1;
        int j=*max_element(nums.begin(),nums.end());
        while(i<=j){
            int mid=(i+j)/2;
            if(sumD(nums,mid)<=threshold){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
        
    }
};