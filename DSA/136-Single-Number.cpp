class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i:nums) mp[i]++;
        // int c=-1;
        // for(auto &p:mp){
        //     if(p.second==1) c=p.first;
        // }
        // return c;
        int single=0;
        for(int i:nums){
            single=single^i;
        }
        return single;
    }
};