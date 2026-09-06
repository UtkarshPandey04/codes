class Solution {
public:
int maxEle(vector<int>& piles){
    int maxi=INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxi=max(piles[i],maxi);
    }
    return maxi;
}
    double totalHour(vector<int>& piles,int hourly){
        double th=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            th+=ceil((double)piles[i]/(double)hourly);
        }
        return th;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=maxEle(piles);
        while(i<=j){
            int mid=(i+j)/2;
            if(totalHour(piles,mid)<=h){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};