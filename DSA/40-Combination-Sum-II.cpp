class Solution {
public:
    void solve(vector<int> &candidates,int index,vector<int> &output,vector<vector<int>> &ans,int target){
        
            if(target==0){
                ans.push_back(output);
                return;
            }
            
     
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            output.push_back(candidates[i]);
            solve(candidates,i+1,output,ans,target-candidates[i]);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(candidates.begin(), candidates.end());
        solve(candidates,0,output,ans,target);
        return ans;
    }
    
};