class Solution {
public:
    int appendCharacters(string s, string t) {
        int sp=0,tp=0,c=0;
        while(sp<s.size()){
            if(s[sp]==t[tp]){c++;tp++;sp++;}
            else 
                sp++;
        }
        return t.size()-c;
    }
};