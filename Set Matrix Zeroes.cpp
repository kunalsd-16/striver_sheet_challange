class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> out;
        for(int i = 0 ; i < m; i++){
            for(int j = 0 ; j< n ; j++){
                if(matrix[i][j]==0){
                    vector<int> in ;
                    in.push_back(i);
                    in.push_back(j);
                    out.push_back(in);

                }
            }
        }
        int s = out.size();
        for(int l = 0; l<s; l++){
            int x  = out[l][0] , y = out[l][1];
            for(int k1 = 0 ; k1 < m ;k1++){
                matrix[k1][y] = 0;
            }
            for(int k2 = 0 ; k2 < n ;k2++){
                matrix[x][k2] = 0;
            }
        }


    }
};
