class Solution {
public:
    double myPow(double x, long long int n) {
        double result=1.0;
        if(n==0)return 1.0;
        else if(n<0)
            {x=1/x;n=-n;}
        while(n){
        if(n%2==1)result*=x;
        x*=x;
        n/=2;}
        return result;
    }
};