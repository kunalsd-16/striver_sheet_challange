// aprroch1 
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n+m-2;
        int r = m - 1; 
        double res = 1;
        for( int i = 1 ; i <= r; i++){
            res = res*(N - r + i)/ i;
        }
        return (int)res;
        
    }
};




// approch 2 
class Solution {
public: 
    int res[101][101]{};
    int uniquePaths(int m, int n, int i =0 , int j=0){
        
        if(i==(m-1) && j== (n-1)){
            return 1;
        }
        if(i >= m || j>= n ){
            return 0;
        }
        if(res[i][j]){
            return res[i][j];
        }
       else     
       return res[i][j] = uniquePaths(m,n,i+1,j) + uniquePaths(m,n,i,j+1);
               
    }
};