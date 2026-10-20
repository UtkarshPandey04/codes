class Solution {
public:
    void solve(int k,int n,int index,vector<int> &output,vector<vector<int>> &ans){
        if(k==0 && n==0){
            ans.push_back(output);
            return;
        }
        for(int i=index;i<=9;i++){
            if(i>n && k<=0) break;
            output.push_back(i);
            solve(k-1,n-i,i+1,output,ans);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>> ans;
       vector<int> output;
       solve(k,n,1,output,ans);
       return ans; 
    }
};