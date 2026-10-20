class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        const int MOD = 1000000007;
        int n=nums.size();
        int left = 0;
        int right = n - 1;
        long long count = 0;
        vector<int> power(n, 1);
        for (int i = 1; i < n; ++i) {
            power[i] = (power[i - 1] * 2) % MOD;
        }
        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                count = (count + power[right - left]) % MOD;

                left++;
            } else {
                right--;
            }
        }

        return count;
    }
};