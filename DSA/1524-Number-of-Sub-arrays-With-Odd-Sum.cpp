class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD=1e9+7;
        int cnt=0;
        int n=arr.size();
        int sum=0;
        int odd=0;
        int even=1;

        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0) {
                cnt=(cnt+odd)%MOD;
                even++;
            }
            else{
                cnt=(cnt+even)%MOD;
                odd++;
            }
        }
        return cnt;
    }
};