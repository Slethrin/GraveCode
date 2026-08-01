class Solution {
public:
    bool pick(vector<int>& nums, int i, int j, bool turn1, int picki, int pickj) {
    if (i > j) {
        return picki >= pickj;
    }

    if (turn1) {
        bool left = pick(nums, i + 1, j, false, picki + nums[i], pickj);
        bool right = pick(nums, i, j - 1, false, picki + nums[j], pickj);
        return left || right;
    }
    else {
        bool left = pick(nums, i + 1, j, true, picki, pickj + nums[i]);
        bool right = pick(nums, i, j - 1, true, picki, pickj + nums[j]);
        return left && right;
    }
}

    bool predictTheWinner(vector<int>& nums) {
    int picki = 0;
    int pickj = 0;

    return pick(nums, 0, nums.size() - 1, true, picki, pickj);
    }
};