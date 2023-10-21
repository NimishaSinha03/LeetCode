class Solution {
public:
    int numSub(string s) {
        long long ans=0,one=0,mod = 1e9+7;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            {ans+=(one*(one+1))/2;
            one=0;}
            else{
                one++;
            }
        }
       ans+=((one)*(one+1))/2;
        return ans%mod;
    }
};