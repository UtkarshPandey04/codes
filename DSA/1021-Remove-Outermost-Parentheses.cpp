class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string ans="";
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                if(cnt>0) ans+=s[i];
                cnt++;
            }
            else if(s[i]==')'){
                cnt--;
                if(cnt>0){
                    ans+=s[i];
                }
            }
           
            i++;
        }
        return ans;
    }
};