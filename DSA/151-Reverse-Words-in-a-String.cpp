class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.length()){
            while(i<s.length() && s[i]==' '){
                i++;
            }
            if(i>=s.length()) break;
            int j=i;
            while(j<s.length() && s[j]!=' '){
                j++;
            }
            ans.push_back(s.substr(i,j-i));
            i=j;
        }
        reverse(ans.begin(),ans.end());
        string final="";
        for(int i=0;i<ans.size();i++){
            final=final+ans[i];
            if(i<ans.size()-1) final+=' ';
        }
        return final;
    }
};