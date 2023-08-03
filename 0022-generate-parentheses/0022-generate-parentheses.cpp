class Solution {
    
public:
    vector<string>ans;
    void rec(int open,int close,string s){
        if(open==0&&close==0){ans.push_back(s);
        return;}
        if(open<close){
            rec(open, close-1,s+')');
        }
        if(open>0){
            rec(open-1,close,s+'(');
        }
    }
    vector<string> generateParenthesis(int n) {
        rec(n,n,"");
        return ans;
    }
};