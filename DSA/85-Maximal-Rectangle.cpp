class Solution {
public:
    int lhis(vector<int>& heights) {
        int n=heights.size();
        vector<int> left(n),right(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        int maxArea=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            maxArea=max(maxArea,width*heights[i]);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxArea=0;
        vector<vector<int>>pSum(n,vector<int>(m, 0));
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                if (matrix[i][j] == '1') {
                    pSum[i][j] = 1;
                    if (i > 0)
                        pSum[i][j] += pSum[i - 1][j];
                }
            }
            maxArea=max(maxArea, lhis(pSum[i]));
        }
        
        return maxArea;
    }
};