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
    long long sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long  ans=0;
        
        vector<int> NSE(n,-1), PSE(n,-1);
        findNSE(arr,NSE);
        findPSE(arr,PSE);
        for(int i=0;i<n;i++){
            long long L=PSE[i]==-1?i+1: i-PSE[i];
            long long R=NSE[i]==-1? n-i : NSE[i]-i;
            long long contribution = (L * R) ;
            contribution = (contribution * arr[i]) ;

            ans = (ans + contribution) ;
        }
        return ans;
    }


    void findNGE(vector<int> &arr, vector<int> &NGE){
        stack<int> st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<arr[i]){
                
                st.pop();
            }
            if (!st.empty()) {
                NGE[i] = st.top();
            }
            st.push(i);
        }
    }
    void findPGE(vector<int> &arr, vector<int> &PGE){
        stack<int> st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                
                st.pop();
            }
            if (!st.empty()) {
                PGE[i] = st.top();
            }
            st.push(i);
        }
    }
    long long sumSubarrayMaxs(vector<int>& arr) {
        int n=arr.size();
        long long  ans=0;
        vector<int> NGE(n,-1), PGE(n,-1);
        findNGE(arr,NGE);
        findPGE(arr,PGE);
        for(int i=0;i<n;i++){
            long long L=PGE[i]==-1?i+1: i-PGE[i];
            long long R=NGE[i]==-1? n-i : NGE[i]-i;
            long long contribution = (L * R) ;
            contribution = (contribution * arr[i]);

            ans = (ans + contribution);
        }
        return ans;
    }
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums)-sumSubarrayMins(nums);
    }
};