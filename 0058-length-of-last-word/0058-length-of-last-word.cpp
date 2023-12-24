class Solution {
public:
    int lengthOfLastWord(string s) {
        // remove last ke spaces
        int i=0,j=s.length()-1;
        while(j>=0&&s[j]==' '){
            j--;
        }
        while(j>=0&&s[j]!=' '){
            i++;
            j--;
        }
        return i;
    }
};