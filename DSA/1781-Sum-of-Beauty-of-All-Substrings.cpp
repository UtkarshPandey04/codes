class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> freq;
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                vector<pair<char,int>>v(freq.begin(),freq.end());
                sort(v.begin(),v.end(),[](auto &a,auto &b){
                    return a.second>b.second;
                });
                int maxSum=0;
                int minSum=0;
                
                maxSum=v[0].second;
                minSum=v[v.size()-1].second;
                ans+= maxSum-minSum;
            }
            
        }
        return ans;
    }
};