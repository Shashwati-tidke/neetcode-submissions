class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(n==0) return 1;
        if (n < 0) {
            return 1.0 / myPow(x, -(long long)n);
        }
        if(n>0){
            if(n%2==0){
                return myPow(x,n/2)*myPow(x,n/2);
            }
            else{
                return x*myPow(x,n/2)*myPow(x,n/2);
            }
        }
        
        

    }
};
