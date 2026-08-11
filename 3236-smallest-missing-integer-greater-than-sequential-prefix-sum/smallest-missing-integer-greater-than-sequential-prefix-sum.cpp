class Solution {
public:
    int missingInteger(vector<int>& v) {
        v.push_back(101);
        int n = v.size();

        unordered_map<int,int> mp;
        int m  =0 ,ans = 0,sum=0,len =0;
         for(int i =0;i<n-1;i++){
            mp[v[i]]++;}
        for(int i =0;i<n-1;i++){
            if(v[i]+1==v[i+1]){
                m++;
                sum+=v[i];
            }
            else{
                sum+=v[i];
                m++;
                len =max(len,m);
                if(m>=len)
                    ans=max(sum,ans);
                sum=0;
                m=0;
                break;
            }
        }
        while(mp.contains(ans)){
            ans++;
        }
        return ans;
    }
};