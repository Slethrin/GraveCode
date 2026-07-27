class Solution {
public:
    int maxProduct(vector<int>& v) {
        int ind  = -1 ,ma = -1,ma2=-1;
        for(int i =0;i<v.size();i++){
            if(v[i]>ma){
                ma =v[i];
                ind = i ;
            }
        }
        for(int i =0;i<v.size();i++){
            if(i==ind){ continue;}
            if(v[i]>ma2){
                ma2 =v[i];
            }
        }
        cout<<ma<<ma2;
        return (ma-1)*(ma2-1) ;
    }
};