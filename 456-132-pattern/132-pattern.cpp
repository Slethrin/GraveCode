class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> premin = nums ;
        vector<int> postmin = nums ;
        for(int i =1;i<nums.size();i++){
            premin[i]=min(nums[i],nums[i-1]);
        }
        for(int i =nums.size()-2;i>=0;i--){
            postmin[i]=min(nums[i],nums[i+1]);
        }
        for(int i =1;i<nums.size()-1;i++){
            if(premin[i-1]<nums[i]&& nums[i]>postmin[i+1] && postmin[i+1]>premin[i-1]){
                return true;
            }
        }
        stack<int> s;
        for(int i =nums.size()-1;i>0;i--){
            if(premin[i]>=nums[i]){continue;}
           
            while(!s.empty() && s.top() <= premin[i]){
                s.pop();
            }
            if (!s.empty() && s.top() < nums[i]) {
                return true;
            }
            s.push(nums[i]);
           
        }
        if (nums.size() < 3) {
            return false;
        }
        stack<int> stk;
        vector<int> min_array(nums.size());
        min_array[0] = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            min_array[i] = min(min_array[i - 1], nums[i]);
        }
        for (size_t j = nums.size() - 1; j > 0; j--) {
            if (nums[j] <= min_array[j]) {
                continue;
            }
            while (!stk.empty() and stk.top() <= min_array[j]) {
                stk.pop();
            }
            if (!stk.empty() and stk.top() < nums[j]) {
                return true;
            }
            stk.push(nums[j]);
        }
        return false;
        return false;
    }
};