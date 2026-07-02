class Solution {
public:
    void dfs(int i,int j,auto& grid,auto& visited){
        visited[i][j] = 1;
        int nr=grid.size();
        int nc=grid[0].size();
        int dx[]={0,0,-1,1};
        int dy[]={1,-1,0,0};
        for(int k=0;k<4;k++){
            int r=i+dx[k];
            int c=j+dy[k];
            if((r>=0 and r < nr) and (c>=0 and c<nc)){
                if(grid[r][c] == '1' and !visited[r][c]){
                    dfs(r,c,grid,visited);
                }
            }
        } 
    }
    int numIslands(vector<vector<char>>& grid) {
      int nr=grid.size();
      int nc=grid[0].size();
      vector<vector<int>> visited(nr,vector<int>(nc,0));
      int isl=0;
      for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
            if(grid[i][j] == '1' and !visited[i][j]){
                dfs(i,j,grid,visited);
                isl++;
            }
        }
      }
      return isl;  
    }
};