class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> arr;
        for(int i = 0 ; i < nums.size(); i++){
            arr.push_back(nums[i]);
        }
        int x = 0 ; 
        sort(arr.begin(),arr.end());
        for(int k = 0 ; k < nums.size()-1 ; k++){
            if(arr[k]==arr[k+1]){
                x = arr[k];
                break;
            }
        }
        return x;
    }
};