class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long int x;
        x=(num/3)-1;
        if(x*3+3==num)return {x,x+1,x+2};
        else return {};
    }
};