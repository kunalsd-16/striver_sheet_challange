class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> a;
        int n = size(nums);
        for (int i = 0; i < n;i++)
        {
            for(int j = i+1 ; j<n;j++)
            {
                
                if(nums[i]+nums[j]== target )
                {
                return {i,j};
                break;
                }
            }
        }
           return{};
    }
};