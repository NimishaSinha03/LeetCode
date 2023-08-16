class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch==' '){
                if(temp!="")
                    st.push(temp);
                    temp="";
                }
                else temp+=ch; 
        }
        string ans="";
       if(temp!=""){
                    st.push(temp);
                } 
           while(!st.empty()){
               ans+=(st.top()+' ');
               st.pop();
           }
        ans.pop_back();
        return ans;
    }
};