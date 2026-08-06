class Solution {
public:
int productDigit(int n ){
    int ans =1;
    while(n>0){
        ans *=n%10;
        n/=10;
    }
    return ans ;
}
    int smallestNumber(int n, int t) {
        while(true){
            int prod = productDigit(n);
            if(prod%t==0){
                return n ;
            }
            n++;
        }
    }
};