class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        for(int k=0;k<n;k++){
            int i = k;
            int j = 0;
            vector<int> temp;
            while(i<n && j<m){
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }

            sort(temp.begin(),temp.end());

            i = k;
            j = 0;
            int idx = 0;
            while(i<n && j<m){
                mat[i][j] = temp[idx];
                idx++;
                i++;
                j++;
            }
        }

        for(int k=1;k<m;k++){
            int i = 0;
            int j = k;
            vector<int> temp;
            while(i<n && j<m){
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }

            sort(temp.begin(),temp.end());

            i = 0;
            j = k;
            int idx = 0;
            while(i<n && j<m){
                mat[i][j] = temp[idx];
                i++;
                idx++;
                j++;
            }
        }

        return mat;
    }
};