
class Solution {
public:
    long long MOD = 1000000007;

    long long myPow(long long base, long long power) {
        long long ans = 1;

        while (power > 0) {
            if (power % 2 == 1) {
                ans = (ans * base) % MOD;
            }

            base = (base * base) % MOD;
            power /= 2;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long evenCount = (n + 1) / 2;
        long long oddCount = n / 2;

        long long evenWays = myPow(5, evenCount);
        long long oddWays = myPow(4, oddCount);

        return (evenWays * oddWays) % MOD;
    }
};
