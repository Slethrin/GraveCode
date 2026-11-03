class Solution {
public:
    int minMoves2(vector<int>& v) {
        sort(v.begin(),v.end()) ;
        int ans = 0; 
        int n  =v.size() ;
        for(int i =0;i<n/2;i++){
            ans+=v[n-1-i]-v[i] ;
        }
        return ans ;
    }
};