class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        vector<int> freq(256,0);
        int maxi=0;
        for(int right=0;right<s.length();right++){
            freq[(unsigned char)s[right]]++;
            while(freq[(unsigned char)s[right]]>1){
                freq[(unsigned char)s[left]]--;
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};