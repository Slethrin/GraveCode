class Solution {
public:
    int minMoves(vector<int>& v) {
        int ans =0 ;
        int ma  = *max_element(v.begin(),v.end());
        for(auto x:v){
            ans+=(ma-x);
        }
        return ans;
    }
};