class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int moves=0;
        int n=nums.size();
        int x=nums[n/2];
        for(int num:nums){
            moves+=abs(num-x);
        }
        return moves;
    }
};