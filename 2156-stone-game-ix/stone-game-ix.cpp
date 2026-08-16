class Solution {
public:
    bool stoneGameIX(vector<int>& v) {
 unordered_map<int,int> m ;
        for(auto x:v){ m[x%3]++ ;}
        int a= m[0],b=m[1],c=m[2] ;
        int s =0 ,f=0 ;
        int t =0 ; 
        if(min(b,c)==0){
            int p = max(b,c) ;
              return a%2==1&&p>2 ;}
       
        return abs(b-c)>2||a%2==0 ;
    }
};