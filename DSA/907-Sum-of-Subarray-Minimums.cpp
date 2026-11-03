class Solution {
public:
    void findNSE(vector<int> &arr, vector<int> &NSE){
        stack<int> st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                
                st.pop();
            }
            if (!st.empty()) {
                NSE[i] = st.top();
            }
            st.push(i);
        }
    }
    void findPSE(vector<int> &arr, vector<int> &PSE){
        stack<int> st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                
                st.pop();
            }
            if (!st.empty()) {
                PSE[i] = st.top();
            }
            st.push(i);
        }
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long  ans=0;
        const long long MOD=1e9+7;
        vector<int> NSE(n,-1), PSE(n,-1);
        findNSE(arr,NSE);
        findPSE(arr,PSE);
        for(int i=0;i<n;i++){
            long long L=PSE[i]==-1?i+1: i-PSE[i];
            long long R=NSE[i]==-1? n-i : NSE[i]-i;
            long long contribution = (L * R) % MOD;
            contribution = (contribution * arr[i]) % MOD;

            ans = (ans + contribution) % MOD;
        }
        return (int)ans;
    }
};