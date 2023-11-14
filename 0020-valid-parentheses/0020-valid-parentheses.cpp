class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='('||c=='{'||c=='['){st.push(s[i]);}
            if(c==')') {if(i==0||st.empty()||st.top()!='(')return false;st.pop();}
            else if(c=='}') {if(i==0||st.empty()||st.top()!='{')return false;st.pop();}
            else if(c==']') {if(i==0||st.empty()||st.top()!='[')return false;st.pop();}
        }
        return st.empty();
    }
};