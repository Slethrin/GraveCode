class Solution {
public:
    int maxSubarrayLength(vector<int>& v, int k) {
        unordered_map<int,int> m ;
        int n = v.size();
        int i =0,j=0;
        int ans =0;
        while(i<=j&& j<n){
            m[v[j]]++;
            if(m[v[j]]>k){
                while(i<=j && m[v[j]]>k){
                    if(m[v[i]]==1){
                        m.erase(v[i]);
                    }
                    else{
                        m[v[i]]--;
                    }
                    i++;
                }
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans ;
    }
};