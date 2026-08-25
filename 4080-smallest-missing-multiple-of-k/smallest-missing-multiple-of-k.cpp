class Solution {
public:
    int missingMultiple(vector<int>& v, int k) {
        int mini = INT_MAX,maxi = INT_MIN;
        unordered_map<int,int> m ;
        for(int i =0;i<v.size();i++){
            if(v[i]%k==0){
                m[v[i]]++;
            }
        }
        for(int i =k;i<300;i+=k){
            if(m.find(i)==m.end()){
                return i ;
            }
        }
        return 0;
    }
};