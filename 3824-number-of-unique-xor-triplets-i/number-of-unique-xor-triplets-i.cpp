class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        if(maxi<3){return maxi;}
        int n = (int)log2(maxi);
        int p = pow(2,n+1);
        return p;
    }
};