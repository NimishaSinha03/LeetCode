class Solution {
public:
    void f(vector<string>&ans, int n,int open, int close, string s){
    if(open==n&&close==n){
        ans.push_back(s);
        return;
    }
       if(open<n) f(ans,n,open+1,close,s+"(");
       if(close<open)f(ans,n,open,close+1,s+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        f(ans,n,0,0,"");
        return ans;
    }
};