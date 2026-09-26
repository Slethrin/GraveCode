class Solution {
public:
    int suni(int n){
        int ans =0;
        while(n>0){
            ans+= (n%10);
            n/=10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& v) {
        for(int i =0;i<v.size();i++){
            if(suni(v[i])==i){
                return i ;
            }
        }
        return -1;
    }
};