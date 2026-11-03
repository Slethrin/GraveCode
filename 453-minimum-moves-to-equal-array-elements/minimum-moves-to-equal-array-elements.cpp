class Solution {
public:
    int minMoves(vector<int>& v) {
        int ans =0 ;
        int mi  = *min_element(v.begin(),v.end());
        for(auto x:v){
            ans+=abs(x-mi);
        }
        return ans;
    }
};