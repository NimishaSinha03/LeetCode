class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0;
        int n=s.size();
        int maxi=0;
        while(j<n){
            char c=s[j];
            mp[c]++;
            while(mp[c]>1){
                char l=s[i];
                mp[l]--;
                // mp[c]--;
                i++;}
                maxi=max(maxi,j-i+1);
            
            j++;
        }
        return maxi;
    }
};