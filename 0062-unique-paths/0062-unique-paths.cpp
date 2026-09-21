class Solution {
public:
    // index i, j = row, col
    // explore all possible things
    //sum all 

    int solve(int i,int j,int m, int n,vector<vector<int>>& dp){
        if(i==0 && j==0){
            return dp[i][j] = 1;
        }

        if(i<0 ||j<0){
            return 0;
        }

        if(dp[i][j]!=-1) return dp[i][j];


        int up = solve(i-1,j,m,n,dp);
        int right = solve(i,j-1,m,n,dp);

        return dp[i][j] = up+right;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,m,n,dp);
    }
};