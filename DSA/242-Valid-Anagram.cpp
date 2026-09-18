class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> chari(26,0);
        for(char a:s){
            chari[a-'a']++;
        }
        for( char b:t){
            if(!chari[b-'a']) {
                return false;
            }
            chari[b-'a']--;
        }
        return true;
    }
};