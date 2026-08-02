class Solution {
public:
 bool calc (vector<int>& v,vector<vector<int>>& dp ,int i ,int j ,bool turn ,int suma ,int sumb ){
    if(i>j){ cout<< suma<<" "<< sumb<<endl ;return suma>=sumb;}
    if(dp[i][j]!=-1){ return dp[i][j];}
    if(turn){
        bool left = calc(v,dp,i+1,j,false,suma+v[i],sumb);
        bool right =calc(v,dp,i,j-1,false,suma+v[j],sumb);

        return dp[i][j] = left || right;
    }
    else{
         bool left = calc(v,dp,i+1,j,true,suma,sumb+v[i]);
        bool right = calc(v,dp,i,j-1,true,suma,sumb+v[j]);
        return dp[i][j] = left || right;
    }


 }
    bool stoneGame(vector<int>& v) {
        int n = v.size();
        vector<vector<int>>dp (n,vector<int>(n,-1));
        return calc(v,dp,0,n-1,true,0,0);



    }
};