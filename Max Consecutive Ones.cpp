class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(), maxi=0 , count=0 , i=0;  
        for(i;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                if(count>maxi){
                    maxi=count;
                }
                count=0;
            }
        }
        if(count>maxi){
            maxi=count;
        }
        return maxi;
    }
};

