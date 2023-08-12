class Solution {
public:
    string get(int n, int i){
        string s="";
        while(n){
            if(n%i!=0){
                int m=n%i;
                s+=m+'0';
                n/=i;
            }
            else{
                s+='0';
                n/=i;
            }
        }
        return s;
    }
    bool ispal(string s){
        string r=s;
       reverse(r.begin(),r.end());
        return r==s;
    }
    bool isStrictlyPalindromic(int n) {
        bool flag=true;
        for(int i=2;i<=n-2;i++){
            string g=get(n,i);
            if(!ispal(g)){
                flag=false;break;
            }
        }
        return flag;
    }
};