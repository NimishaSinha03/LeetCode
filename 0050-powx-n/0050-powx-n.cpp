class Solution {
public:
    double solve(double x, long long n){
        if(n==0)return 1;
        if(n%2==0)return solve(x*x,n/2);
        else return x*solve(x*x,(n-1)/2);
    }
    double myPow(double x, long long n) {
        if(n<0)return 1.0/(solve(x,(long long)n*-1));
        return solve(x, (long long)n);
    }
};