class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=-1;
        int end=-1;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target) {
                end=mid;
                i=mid+1;
            }
            else if(nums[mid] < target){
                
                i=mid+1;
            }
            else j=mid-1;
        }
        i=0;
        j=nums.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target) {
                start=mid;
                j=mid-1;
            }
            else if(nums[mid] < target){
                
                i=mid+1;
            }
            else j=mid-1;
        }
        return {start,end};
    }
};