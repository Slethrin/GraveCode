class Solution {
public:
    int longestSubsequence(vector<int>& v) {
        int ans = 0,f=0;
        for(auto x:v){
            if(x!=0){f =1;}
            ans^=x;
        }
        if(f==0){
            return  0 ;
        }
        return  ans ==0 ?v.size()-1:v.size();
    }
};