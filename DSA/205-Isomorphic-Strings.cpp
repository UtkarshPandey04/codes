class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> chk1;
        unordered_map<char,char> chk2;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            char a=s[i];
            char b=t[i];
            if(chk1.count(a) && chk1[a]!=b) return false;
            if(chk2.count(b) && chk2[b]!=a) return false;
            chk1[a]=b;
            chk2[b]=a;
        }
        return true;
    }
};