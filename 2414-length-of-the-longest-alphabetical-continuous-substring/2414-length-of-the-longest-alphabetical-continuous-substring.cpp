class Solution {
public:
    int longestContinuousSubstring(string s) {
      string g= "abcdefghijklmnopqrstuvwxyz";
        int count=1;
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i+1]-s[i]==1)count++;
            else count=1;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};