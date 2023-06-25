class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if ( n == 1)
        return;

        int i = 1; 
        int lastinc = -1;

        while(i<n){
            if(nums[i]>nums[i-1]){
                    lastinc = i ; 
                    
                }

            i++;

        }
        if(lastinc == -1){
            int i , key, j ;
            for ( i = 1 ; i < n ; i++){
                key = nums[i];
                j = i -1;
                while ( j>= 0 && nums[j] > key ){
                    nums[j+1] = nums[j];
                    j = j -1;
                  }
                  nums[j+1]= key;

            }
            return;
        }
        int index = lastinc;
        for( int i = lastinc; i < n ; ++i){
            if(nums[i]>nums[lastinc-1] && nums[i]< nums[index]){
                index = i;
            
            }
        }
        swap(nums[lastinc - 1], nums[index]);
        sort(nums.begin()+lastinc , nums.end());
    }
};