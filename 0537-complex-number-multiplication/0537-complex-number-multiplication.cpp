class Solution {
public:
    pair<int, int> solve(string & s){
        const string & real=s.substr(0,s.find_first_of('+'));
        const string & imag=s.substr(s.find_first_of('+')+1);
        return {stoi(real),stoi(imag)};
    }
    string complexNumberMultiply(string num1, string num2) {
        const auto&[A,B]=solve(num1);
        const auto&[C,D]=solve(num2);
        return to_string(A*C-D*B)+"+"+to_string(C*B+A*D)+"i";
    }
};