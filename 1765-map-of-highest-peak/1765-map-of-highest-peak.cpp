class Solution {
public:
    vector<int> dr = {-1,0,1,0};
    vector<int> dc = {0,1,0,-1};
    // void dfs(vector<vector<int>>& isWater,int depth,int i,int j){
    //     int n = isWater.size();
    //     int m = isWater[0].size();
    //     if(i<0 || i>=n) return;
    //     if(j<0 || j>=m) return;
    //     for(int k=0;k<4;k++){
    //         int newr = i + dr[k];
    //         int newc = j + dc[k];
    //         if(newr>=0 && newr<n && newc>=0 && newc<m){
    //             if(isWater[newr][newc]!=0){
    //                 if(isWater[newr][newc]>depth+1){
    //                     isWater[newr][newc] = depth+1;
    //                     dfs(isWater,depth+1,newr,newc);
    //                 }
    //             }
    //         }
    //     }
    //     return;
    // }
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n = isWater.size();
        int m = isWater[0].size();

        queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    isWater[i][j] = 0;
                    pq.push({i,j});
                } else{
                    isWater[i][j] =-1;
                }
            }
        }

        //multi source
        while(!pq.empty()){
            auto it = pq.front();
            pq.pop();
            
            int r = it.first;
            int c = it.second;

            for(int k=0;k<4;k++){
                int nr = dr[k] + r;
                int nc = dc[k] + c;
                if(nr>=0 && nr<n && nc>=0 && nc<m && isWater[nr][nc]==-1){
                    isWater[nr][nc] = isWater[r][c] + 1;
                    pq.push({nr,nc});
                }
            }
        }

        return isWater;

    }
};