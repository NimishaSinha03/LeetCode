class Solution {
public:
        bool vow(char ch) {
        return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
    }
    long long countVowels(string word) {
        long long ans=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(vow(word[i]))
    ans+=(long)(n-i)*(long)(i+1);
        
        }
        return ans;
    }
};