class Solution {
public:
    long long smallestNumber(long long num) {
        string s=to_string(abs(num));
        if(num<0){
            // num=-1*num;
            sort(s.rbegin(),s.rend());
            // num=-1*num;
        }
        else {
            sort(s.begin(),s.end());
        }
        if(num>0){
                    int index=s.find_first_not_of('0');
                    swap(s[index],s[0]);
                }
        
        long long ans=stoll(s);
        if(num<0)return ans*-1;
        else return ans;
        
    }
};