class Solution {
public:
    long long int reverse(long long int x) {
        long long int ans=0;
        while(x){
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && x < INT_MIN % 10))return 0;
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && x > INT_MAX % 10))return 0;
            ans=ans*10+x%10;
            x/=10;
        }
        return ans;
    }
};