class Solution {
public:
    int firstStableIndex(vector<int>& v, int k) {
        vector<int> preSum = v;
        v.insert(v.begin(),0);
        for(int i=1;i<v.size();i++){
            v[i]=max(v[i],v[i-1]);
        }
        int temp = preSum.back();
        int ans = 0,f=1;
        for(int i =preSum.size();i>0;i--){
            temp = min(preSum[i-1],temp);
            // cout<<i<<" "<<temp<<"  "<<v[i]<<endl;
            if(v[i]-temp<=k){
                ans =i-1;
                f=0;
            }
        }
        if(f==1){
            return -1;
        }
        return ans>1e9?-1:ans ;

    }
};