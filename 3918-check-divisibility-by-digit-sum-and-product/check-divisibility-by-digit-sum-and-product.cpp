class Solution {
public:
    int sumOfDigit(int n ){
        int p =0;
        while(n>0){
            p+=(n%10);
            n/=10;
        }
        return p ;
    }
    int sumOfMultiply(int n ){
        int p =1;
        while(n>0){
            p*=(n%10);
            n/=10;
        }
        return p ;
    }
    bool checkDivisibility(int n) {
        int p = sumOfDigit(n);
        p+= sumOfMultiply(n);
        return n%p==0;
    }
};