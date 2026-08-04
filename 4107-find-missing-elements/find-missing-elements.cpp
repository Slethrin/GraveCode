class Solution {
public:
    vector<int> findMissingElements(vector<int>& v) {
        unordered_map<int,int> m;
        int mini  = 101,maxi = 0;
        for(int i =0;i<v.size();i++){
            m[v[i]]++;
            mini = min(mini,v[i]);
            maxi = max(maxi,v[i]);
        }
        vector<int> ans;
        for(int i =mini;i<=maxi;i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};