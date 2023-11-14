class Solution {
public:
    long long int reverse(long long int x){
        long long int ans = 0;
        while(x){
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ans;
    }

    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers are not palindromes
        }
        int reversedX = reverse(x);
        return reversedX == x;
    }
};
