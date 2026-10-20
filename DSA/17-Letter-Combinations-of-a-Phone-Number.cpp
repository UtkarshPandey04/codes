class Solution {
public:
    void solve(string &digits,int index,unordered_map<int,string>mpp,string &output,vector<string> &ans){
        if(index==digits.length()){
            ans.push_back(output);
            return;
        }
        int value=digits[index]-'0';
        string val=mpp[value];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits,index+1,mpp,output,ans);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        unordered_map<int,string> mpp={     {0,""},
                                            {1,""},
                                            {2, "abc"},
                                            {3, "def"},
                                            {4, "ghi"},
                                            {5, "jkl"},
                                            {6, "mno"},
                                            {7, "pqrs"},
                                            {8, "tuv"},
                                            {9, "wxyz"}
                                        };
        solve(digits,0,mpp,output,ans);
        return ans;
    }
};