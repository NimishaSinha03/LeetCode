class Solution {
public:
    int solve(int i, int j, string word1, string word2,vector<vector<int>>&dp){
        if(i>=word1.length())return word2.length()-j;
        if(j>=word2.length())return word1.length()-i;
        if(dp[i][j]!=-1)return dp[i][j];
        if(word1[i]==word2[j])
            return dp[i][j]= solve(i+1,j+1,word1, word2,dp);
        int insert=solve(i,j+1,word1, word2,dp);
        int del=solve(i+1,j,word1,word2,dp);
        int replace=solve(i+1,j+1,word1,word2,dp);
        dp[i][j]=1+min(insert, min(del,replace));
        return dp[i][j];
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(0,0,word1,word2, dp);
    }
};