class Solution {
public:
    int appendCharacters(string s, string t) {
        int a=0,b=0,ans=0;
        while(a<s.size()){
            if(s[a]==t[b]){
                a++;
                b++;
                ans++;
            }
            else a++;
        }
        return t.size()-ans;
    }
};