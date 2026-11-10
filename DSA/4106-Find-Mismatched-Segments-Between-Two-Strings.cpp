class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int n=s1.size();
       
        string a1="";
        string a2="";
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                a1+=s1[i];
                a2+=s2[i];
            }
            
            else{
                if(!a1.empty()){
                    ans.push_back({a1,a2});
                    a1="";
                    a2="";
                }
            }
        }
        if(!a1.empty()){
            ans.push_back({a1,a2});
        }
        return ans;
    }
};