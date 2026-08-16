class Solution {
public:
    int getLength(vector<int>& nums) {
        vector<int> dremovical = nums;

        int n = nums.size();
        int ans = 1;

        for (int l = 0; l < n; l++) {
            unordered_map<int, int> freq;
            map<int, int> cntFreq; // frequency -> count of values

            for (int r = l; r < n; r++) {
                int x = nums[r];

                if (freq.count(x)) {
                    int oldFreq = freq[x];

                    cntFreq[oldFreq]--;
                    if (cntFreq[oldFreq] == 0)
                        cntFreq.erase(oldFreq);
                }

                freq[x]++;
                cntFreq[freq[x]]++;

                int distinct = freq.size();

                bool valid = false;

                if (distinct == 1) {
                    valid = true;
                }
                else if (cntFreq.size() == 2) {
                    auto it1 = cntFreq.begin();
                    auto it2 = prev(cntFreq.end());

                    int mnFreq = it1->first;
                    int mxFreq = it2->first;

                    if (mxFreq == 2 * mnFreq)
                        valid = true;
                }

                if (valid)
                    ans = max(ans, r - l + 1);
            }
        }

        return ans;
    }
};