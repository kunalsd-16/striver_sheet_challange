class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>map;   
        int maxi=0;
        int sum=0;class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        string ans=""; int max=0;
        if(n==0){
            return 0;
        }
        else if (n==1){
            return 1;
        }
        else{                        
            for(int i=0;i<n;i++){             
                char x=s[i];
                if(ans.size()==0){
                    ans+=s[i];
                    continue;
                }
                else{
                    int j=0;
                    for(j;j<ans.size();j++){   
                        if (x!=ans[j]){   
                            continue;
                        }
                        else if(x==ans[j]){
                            if(ans.size()>max){    
                                max=ans.size(); 
                            }
                            if(j==ans.size()-1){  
                                ans="";
                            }
                            else{
                                string r=ans.substr(j+1);
                                ans=r;
                            }
                            break;
                        }
                    }
                    ans+=x; 
                    if(ans.size()>max){  
                        max=ans.size();
                    }
                }
            }
        }
        return max;        
    }
};
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
                maxi=i+1;
            }
            else{
                if(map.find(sum)!=map.end()){
                    maxi=max(maxi,i-map[sum]);
                }
                else{
                    map[sum]=i;
                }
            }
        }
        return maxi;
        
    }
};