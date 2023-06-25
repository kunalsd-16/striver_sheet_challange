class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Mat;
 
        for(int i = 0 ; i < numRows ; i++){
 
            vector<int> in;
            in.push_back(1);            

            for( int j = 1 ; j < i;j++ ){
              int x = Mat[i-1][j-1]+Mat[i-1][j];
               in.push_back(x);
            }
            if(i!=0){
                in.push_back(1);
            }                                            
            Mat.push_back(in);
        }
        return Mat;
    }
};