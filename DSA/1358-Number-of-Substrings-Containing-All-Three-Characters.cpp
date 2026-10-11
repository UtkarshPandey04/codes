class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        vector<int> freq(3,0);
        int ans=0;
        int len=s.length();
        for(int right=0;right<s.length();right++){
            freq[s[right]-'a']++;
            while(freq[0]>=1 && freq[1]>=1 && freq[2]>=1){
                ans+=len-right;
                freq[s[left]-'a']--;
                left++;
            }
          
        }
        return ans;
    }
    
};