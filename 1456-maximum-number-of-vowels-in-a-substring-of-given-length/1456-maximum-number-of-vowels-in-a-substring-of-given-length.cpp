class Solution {
public:
    bool isv(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    int maxVowels(string s, int k) {
    int n=s.size();
        int count=0;
        int ans;
        for(int i=0;i<k;i++){
            if(isv(s[i]))count++;
        }
        ans=count;
        for(int i =k;i<n;i++){
            if(isv(s[i]))count++;
            if(isv(s[i-k]))count--;
            ans=max(ans,count);
        }
        return ans;
    }
};