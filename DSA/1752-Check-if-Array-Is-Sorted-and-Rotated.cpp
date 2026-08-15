class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr=nums;
        //for(int i=0;i<nums.size();i++) arr[i]=nums[i];
        sort(arr.begin(),arr.end());
       
        for(int x=0;x<nums.size();x++){
            bool ok=true;
            for(int i=0;i<nums.size();i++){
                if(arr[i]!=nums[(i+x)%nums.size()]){
                    ok=false;
                    break;
                }
            }       
            if(ok) return true;
        }
        return false;
    }
};