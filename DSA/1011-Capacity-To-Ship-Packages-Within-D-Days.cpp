class Solution {
public:
    int reqDays(vector<int>& weights,int mid){
        int load=0;
        int day=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>mid){
                load=weights[i];
                day++;
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int a:weights) sum+=a;
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(reqDays(weights,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};