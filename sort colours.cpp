class Solution {
public:
    void sortColors(vector<int>& nums) {  
        int x = 0 , temp;
        while(x!=nums.size()-1){
            for(int i = nums.size()-1 ; i > x ; i--){
                if(nums[i]<nums[x]){
                    temp = nums[x];
                    nums[x]=nums[i];
                    nums[i]=temp;
                }
            }
            x++;
        }         
    }
};
