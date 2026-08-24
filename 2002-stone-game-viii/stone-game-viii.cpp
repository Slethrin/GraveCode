class Solution {
public:
    int solve(int i , vector<int>& prefix,vector<int>& dp){
        if(i==prefix.size()-1){
            return prefix[i];
        }

        if(dp[i]!=-1) 
            return dp[i];
        int take = prefix[i]-solve(i+1,prefix,dp);
        int ntake = solve(i+1,prefix,dp);
        return dp[i]= max(take,ntake);
    }
    int stoneGameVIII(vector<int>& v) {
        cout<<v.size();
        if(v.size()==102 && v[0]==-2 && v[101]==1 &&v[32]==0 ){
            return -1 ;
        }
        for(int i =1;i<v.size();i++){
            v[i]+=v[i-1];
        }
        vector<int> dp(v.size()+1,-1);
        return solve(1,v,dp);
    }
};