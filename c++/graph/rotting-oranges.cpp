#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<pair<int,int>,int>> q;  // ((i,j), time)

        // Push all initially rotten oranges
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }

        // BFS processing
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            int i = curr.first.first;
            int j = curr.first.second;
            int time = curr.second;

            ans = max(ans, time);

            // Directions: up, right, down, left
            int di[4] = {-1, 0, 1, 0};
            int dj[4] = {0, 1, 0, -1};

            for(int k = 0; k < 4; k++){
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni >= 0 && ni < n && nj >= 0 && nj < m && !vis[ni][nj] && grid[ni][nj] == 1){
                    vis[ni][nj] = true;
                    q.push({{ni, nj}, time + 1});
                }
            }
        }

        // Final check for any remaining fresh oranges
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    return -1;
                }
            }
        }

        return ans;
    }
};

int main() {
    // Sample grid input
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };

    Solution sol;
    int result = sol.orangesRotting(grid);
    cout << "Time required to rot all oranges = " << result << endl;

    return 0;
}
