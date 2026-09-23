class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        vector<int> pre = v;
        for(int i=1;i<pre.size();i++){
            pre[i]+=pre[i-1];
        }
        unordered_map<int,int> suff;
        int sp =0;
        
        int ans =1e8;
        for(int i =v.size()-1;i>=0;i--){
            sp+=v[i];
            suff[sp]=v.size()-i;
            if(sp==x){
                ans= min(ans,suff[sp]);
            }
        }
        for(int i =0;i<pre.size();i++){
            if(x-pre[i]<0){
                break;
            }
            if(pre[i]==x){
                ans=min(ans,i+1);
            }
            if(suff.find(x-pre[i])!=suff.end() && (v.size()-suff[x-pre[i]]>i)){
                int numLastElem = v.size()-suff[x-pre[i]];
                ans = min(ans,i+1+suff[x-pre[i]]);
            }
        }
        return ans> 1e7?-1:ans;
        
    }
};