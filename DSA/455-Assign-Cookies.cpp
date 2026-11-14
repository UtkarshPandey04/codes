class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int l=0,r=0;
        int cnt=0;
        while(l < s.size() && r < g.size()){
            if(s[l]>=g[r]){
                r++;
                cnt++;
            }
            l++;
        }
        return cnt;
    }
};