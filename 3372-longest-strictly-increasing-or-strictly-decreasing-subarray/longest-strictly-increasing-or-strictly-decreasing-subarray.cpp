class Solution {
public:
    int longestMonotonicSubarray(vector<int>& v) {
        int c=  1 ,ans =1 ;
      for(int i=1;i<v.size();i++)
      {
        if(v[i]>v[i-1]){ c++ ;}
        else{  c=1 ;}
        ans= max(ans,c) ;
      }
      reverse(v.begin(),v.end()) ;
      for(int i=1;i<v.size();i++)
      {
        if(v[i]>v[i-1]){ c++ ;}
        else{  c=1 ;}
        ans= max(ans,c) ;
      }
      return ans ;
    }
};