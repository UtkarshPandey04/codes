class Solution {
public:
    long long countValidSubstrings(string s) {
        long long cnt=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' &&s[i]=='c') j=i-1;;
            cnt=cnt+(i-j+1);
           
        }
        return cnt;
    }
};