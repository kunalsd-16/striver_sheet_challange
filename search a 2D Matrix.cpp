class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int  n = matrix[0].size();
        int arr[m*n] , c = 0;
        for( int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                arr[c]=matrix[i][j];
                c++;
            }
        }
        bool flag = false ;
        int beg = 0 , end = m*n - 1 , mid =  (end + beg )/2 ; 
        while(beg <= end)
        {
            if(arr[mid]==target){
                flag = true;
                break;
            }
            if ( target > arr[mid] ){
                beg = mid + 1 ;
            }
            else{
            end = mid - 1; 
            } 
            mid =  (end + beg )/2 ;

        }
        return flag;
        
    }
};