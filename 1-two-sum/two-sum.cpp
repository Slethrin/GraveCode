class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a, b , tar;
        for(int i=0 ;i<nums.size()-1 ;i++) {
            tar =target -nums[i];
            for (int j=i+1;j<nums.size() ;j++) {
                if(tar==nums[j]) {
                   // return { i, j};
                a=i;
                    b=j;
                }}}
    return { a, b };
    }
};