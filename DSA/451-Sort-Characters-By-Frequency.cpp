class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        for(char a:s){
            freq[a]++;
        }
        vector<pair<char,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string a="";
        for (auto &p : v) {
            a.append(p.second, p.first);
        }
        return a;
    }
};