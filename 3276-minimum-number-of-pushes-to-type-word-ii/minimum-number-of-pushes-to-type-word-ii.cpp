class Solution {
public:
    int minimumPushes(string s) {
        vector<int> v(26,0);
        for(int i =0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        sort(v.rbegin(),v.rend());
        int c =8,ans=0;
        for(int i=0;i<26;i++){
            ans += v[i]*(c++/8);
        }
        return ans;

    }
};