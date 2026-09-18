class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string i=strs[0];
        string k=strs[strs.size()-1];
        string ans="";
        for(int j=0;j<min(i.size(),k.size());j++){
            if(i[j]!=k[j]){
                return ans;
            }
            ans+=i[j];
        }
        return ans;
    }
};