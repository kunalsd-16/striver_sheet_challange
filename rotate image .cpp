class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(),temp, trans[n][n];        
        for(int i = 0 ;i < n ; i++){
            for( int j = 0 ; j < n; j++){
                trans[i][j] = matrix[j][i];
                
            }
        }
        
        for(int i = 0 ;i < n ; i++){
            for( int j = 0 ; j < n; j++){
                 matrix[i][j]= trans[i][j];
                
            }
        }
            // for mirror elements
        for( int i = 0 ; i < n ;i++){
            for(int j = 0; j < n/2 ;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1]=temp;
                
            }
        }
        
    }
};