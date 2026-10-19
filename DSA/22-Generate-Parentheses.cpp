class Solution {
public:
    void solve(int open,int close,vector<string>& ans,string s){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            solve(open-1,close,ans,s+"(");
        }
        if(close>0 && open<close){
            solve(open,close-1,ans,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n,n,ans,"");
        return ans;
    }
};