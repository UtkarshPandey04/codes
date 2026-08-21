class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int maxi = 1;
        int count = 1;

        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i + 1] == nums[i] + 1) {
                count++;
            } else if (nums[i + 1] == nums[i]) {
                continue;
            } else {
                maxi = max(maxi, count);
                count = 1;
            }
        }

        return max(maxi, count);
        // if (nums.empty()) return 0;

        // sort(nums.begin(), nums.end());

        // int max_len = 1;
        // int current_len = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         continue; // Skip duplicates
        //     } else if (nums[i] == nums[i - 1] + 1) {
        //         current_len++;
        //     } else {
        //         max_len = max(max_len, current_len);
        //         current_len = 1;
        //     }
        // }

        // return max(max_len, current_len);
    }
};