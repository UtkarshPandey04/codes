class Solution {
public:
vector<string> ans;
void sol(int index,string &nums,int target,string path,long long eval,long long residual){
    if(index==nums.length()){
        if(eval==target){
            ans.push_back(path);
        }
        return;
    }
    string currStr;
    long long num=0;
    for(int i=index;i<nums.length();i++){
        if(i>index &&nums[index]=='0') return;
        currStr+=nums[i];
        num=num*10+nums[i]-'0';
        if(index==0){
            sol(i+1,nums,target,path+currStr,num,num);
        }
        else{
            sol(i+1,nums,target,path+"+"+currStr,eval+num,num);
            sol(i+1,nums,target,path+"-"+currStr,eval-num,-num);
            sol(i+1,nums,target,path+"*"+currStr,eval-residual+num*residual,num*residual);
        }
    }
}
    vector<string> addOperators(string num, int target) {
        
        sol(0,num,target,"",0,0);
        return ans;
    }

};