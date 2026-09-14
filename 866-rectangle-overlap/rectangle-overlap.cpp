class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        if (a[0] < b[2] && b[0] < a[2] &&
        a[1] < b[3] && b[1] < a[3]) {
        return true;
    }

    return false;
    }
};