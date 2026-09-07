class Solution {
public:
    bool possible(vector<int>& bloomDay, int day,int m, int k){
        int cnt=0;
        int bq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day) cnt++;
            else{
                bq=bq+cnt/k;
                cnt=0;
            }
        }
        bq=bq+cnt/k;
        return bq>=m;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val= m*1LL*k*1LL;
        if(val > bloomDay.size()) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        int i=mini;
        int j=maxi;
        while(i<=j){
            int mid=(i+j)/2;
            if(possible(bloomDay,mid,m,k)){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};