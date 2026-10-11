class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);
        for(char c:t) freq[c]++;
        int left=0;
        int minLen=INT_MAX;
        int count=t.length();
        int start=-1;
        for(int right=0;right<s.length();right++){
            if(freq[s[right]]>0) count--;
            freq[s[right]]--;
            while(count==0){
                int windowLen=right-left+1;
                if(windowLen<minLen){
                    minLen=windowLen;
                    start=left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0) count++;
                left++;
            }
        }
        if (minLen == INT_MAX) return "";
        return s.substr(start,minLen);
    }
};