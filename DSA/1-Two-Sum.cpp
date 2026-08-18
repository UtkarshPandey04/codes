class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};
        unordered_map<int,int> order;
        for(int i=0;i<nums.size();i++){
            if(order.find(target-nums[i])!=order.end()) return {order[target-nums[i]],i};
            order[nums[i]]=i;
        }
        return {-1,-1};
    }
};