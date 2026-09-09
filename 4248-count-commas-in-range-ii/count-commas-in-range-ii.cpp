class Solution {
public:
    long long countCommas(long long n) {
        long long ans =0,temp =0;
        while(n>0){
            string s = to_string(n);
            int  siz = s.size(); 
            if(siz<7){
                ans += (n)*1 - 999;
                n= 0;
            }
            else{
                siz-=1;
                siz/=3;
                int p = (siz*3)+1 ;
                p--;
                temp = pow(10,p)-1;
                ans  += (n-temp)*siz;
                n =temp;
            }
        }
        return ans<0?0:ans;
    }
};