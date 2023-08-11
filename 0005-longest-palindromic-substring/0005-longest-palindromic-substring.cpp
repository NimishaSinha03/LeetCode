class Solution {
public:
    bool ispal(string &s,int i, int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int start=0;
        int maxi=INT_MIN;
        int n=s.size();
        // string t=reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            for(int j=i;j<n;j++){
                if(ispal(s,i,j)){
                     if(j-i+1 > maxi){
                        maxi = j-i+1;
                        start = i;
                    }

                }
            }
        }
        return s.substr(start,maxi);
    }
};
