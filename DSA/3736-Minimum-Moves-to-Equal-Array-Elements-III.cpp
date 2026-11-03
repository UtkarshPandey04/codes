class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int x=nums[n-1];
        int moves=0;
        for(int num:nums){
            moves+=abs(num-x);
        }
        return moves;
    }
};