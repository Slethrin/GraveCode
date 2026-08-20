class Solution {
public:
    vector<int> resultArray(vector<int>& v) {
        vector<int> a,b;
        a.push_back(v[0]);
        b.push_back(v[1]);
        for(int i =2;i<v.size();i++){
            if(a.back()>b.back()){
                a.push_back(v[i]);
            }
            else{
                b.push_back(v[i]);
            }
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
    }
};