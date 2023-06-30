class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
       int e1 = -1 , e2 =-1, c1 =0 , c2 = 0 , i;
       for(i = 0 ; i<n ; i++){
           if(nums[i]==e1)
           c1++;
           else if(nums[i]==e2)
           c2++;
           else if(c1==0){
               e1=nums[i];
               c1 = 1;
           }
           else if(c2 == 0){
               e2=nums[i];
               c2=1;
           }
           else {
               c1-- ; c2-- ;
           }
       }
       vector<int> ans ;
       c1=c2=0;
       for(i = 0 ; i<n ; i++){
           if(nums[i]==e1)
           c1++;
           else if(nums[i] == e2)
           c2++;
       }
       if( c1 > n/3){

       ans.push_back(e1);
       }
       if(c2 > n/3){

       ans.push_back(e2);
       }

       return ans;
    }
};