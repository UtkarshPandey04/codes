class Solution {
private:
    int countValidSplits(const std::vector<int>& nums) {
        int m = nums.size();
        if (m < 2) return 0;

        std::vector<int> prefixGcd(m);
        std::vector<int> suffixGcd(m);

        prefixGcd[0] = nums[0];
        for (int i = 1; i < m; ++i) {
            prefixGcd[i] = std::gcd(prefixGcd[i - 1], nums[i]);
        }

        suffixGcd[m - 1] = nums[m - 1];
        for (int i = m - 2; i >= 0; --i) {
            suffixGcd[i] = std::gcd(suffixGcd[i + 1], nums[i]);
        }

        int count = 0;
        for (int i = 0; i < m - 1; ++i) {
            if (prefixGcd[i] == suffixGcd[i + 1]) {
                count++;
            }
        }
        return count;
    }

public:
    int maxValidSplits(std::vector<int>& nums) {
        std::vector<int> vornalethm = nums;
        int n = vornalethm.size();

        int maxScore = countValidSplits(vornalethm);

        if (n > 1) {
            for (int removeIdx = 0; removeIdx < n; ++removeIdx) {
                std::vector<int> current;
                current.reserve(n - 1);
                for (int i = 0; i < n; ++i) {
                    if (i != removeIdx) {
                        current.push_back(vornalethm[i]);
                    }
                }
                maxScore = std::max(maxScore, countValidSplits(current));
            }
        }

        return maxScore;
    }
};