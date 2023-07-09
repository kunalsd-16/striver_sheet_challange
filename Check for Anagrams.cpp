class Solution {
public:
    bool isAnagram(string s, string t) {
        vector < string > s1;
        vector < string > t1;
        int ns = s.size() , nt = t.size();
        bool flag = false;
        if ( ns == nt)
        {
            int n = ns;
            for ( int i =0 ; i <n ; i++){
                s1.push_back(to_string(s[i]));
                t1.push_back(to_string(t[i]));
            }
            sort(s1.begin(),s1.end());
            sort(t1.begin(),t1.end());
            if ( s1==t1)
            {
                flag = true;
            }
        }
        else
        {
            flag = false;
        }
        return flag;
        
    }
};