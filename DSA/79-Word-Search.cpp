class Solution {
public:
    bool sol(vector<vector<char>>& board,string word,int i,int j,int n,int m,int k){
        if(k>=word.size()) return true;
        if(i<0 || i>=n || j<0 || j>=m || word[k]!=board[i][j]) return false;
        if(word.size()==1 && word[k]==board[i][j]) return true;
        board[i][j]='.';
        int X[4]={0,0,-1,1};
        int Y[4]={1,-1,0,0};
        bool ans=false;
        for(int index=0;index<4;index++){
            ans=ans || sol(board,word,i+X[index],j+Y[index],n,m,k+1);
        }
        board[i][j]=word[k];
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        if(n==0 || word.size()==0) return false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(sol(board,word,i,j,n,m,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};