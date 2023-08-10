class Solution {
public:
    int solve(string word1,int i, int j, string word2,vector<vector<int>>&dp){
        if(i>=word1.length())return word2.length()-j;
        if(j>=word2.length())return word1.length()-i;
        if(dp[i][j]!=-1)return dp[i][j];
        if(word1[i]==word2[j])
            return dp[i][j]=solve(word1,i+1,j+1,word2,dp);
        
        // else
        int insert=solve(word1,i,j+1,word2,dp);
        int replace=solve(word1,i+1,j+1,word2,dp);
        int dlt=solve(word1,i+1,j,word2,dp);
        dp[i][j]=1+min(insert,min(replace,dlt));
       // dp[i][j]=min(solve(word1,i,j+1,word2,dp),min(solve(word1,i+1,j+1,word2,dp),solve(word1,i+1,j,word2,dp)))+1;
        return dp[i][j];
        // return res;
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size() , vector<int>(word2.size(),-1));
        return solve(word1,0,0,word2,dp);
    }
};

