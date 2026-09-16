class Solution {
public:
    int maxIndex(vector<vector<int>>mat,int rows,int cols,int mid){
        int maxEle=-1;
        int maxIndex=-1;
        for(int i=0;i<rows;i++){
            if(mat[i][mid]>maxEle){
                maxEle=mat[i][mid];
                maxIndex=i;
            }
        }
        return maxIndex;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        int low=0;
        int high=cols-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxRowIndex=maxIndex(mat,rows,cols,mid);
            int left=mid-1>=0?mat[maxRowIndex][mid-1]:-1;
            int right=mid+1<cols?mat[maxRowIndex][mid+1]:-1;
            if(mat[maxRowIndex][mid]> left && mat[maxRowIndex][mid]> right){
                return {maxRowIndex,mid};
            }
            else if(mat[maxRowIndex][mid]< left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};