class Solution {
public:
    int calc(vector<int>& v,vector<int>& dp,int i ){
        int n = v.size();
        if(i>=v.size()){ return 0;}
        if(dp[i]!=-1){
            return dp[i];
        }
        int temp =0 ;
        temp = v[i] -calc(v,dp,i+1);
        if(i+1<n)
            temp = max(temp,v[i]+v[i+1]-calc(v,dp,i+2));
        if(i+2<n)
            temp = max(temp,v[i]+v[i+1]+v[i+2]-calc(v,dp,i+3));
        return dp[i] = temp;
    }
    string stoneGameIII(vector<int>& v) {
        int n = v.size();
        vector<int> dp(n,-1);
        int p = calc(v,dp,0);
        cout<<p;
        if(p>0){
            return "Alice";
        }
        else if (p==0){
            return "Tie";
        }
        return "Bob";
    }
};