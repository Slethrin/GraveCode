class Solution {
public:
    int calc(string s,vector<int>&dp,int i){
        if(i>=s.size()){return 0;}
        if(i==s.size()-1){return 1;}
        if(dp[i]!=-1) return dp[i];
        unordered_map<int,int>freq;
        int ans =2000;
        for(int j= i;j<s.size();j++){
            bool d =0;int fg =-1;
            freq[(int)(s[j]-'a')]++;
            for (auto x : freq) {
    if (fg == -1) {
        fg = x.second;
    } else if (fg != x.second) {
        d = true;
        break;
    }
}
            if(d==0){
                ans=min(ans,1+calc(s,dp,j+1));
            }
        }

        return dp[i]=ans;
    }
    int minimumSubstringsInPartition(string s) {
        vector<int> dp(s.size(),-1);
        return calc(s,dp,0);
    }
};