class Solution {
private:
    bool ispal(string s, int l, int r){
        while(l<r)
        {if(s[l++]!=s[r--])return false;}
        return true;
    }
    void part(string s,int start,vector<string>&output,vector<vector<string>>&ans){
        int n=s.length();
        if(start==n)ans.push_back(output);
        else {for(int i=start;i<n;i++)
        {
            if(ispal(s,start,i)){
                output.push_back(s.substr(start,i-start+1));
                part(s,i+1,output,ans);
                output.pop_back();
            }
            }}
    }
    public:
    vector<vector<string>> partition(string s) {
        vector<string>output;
        vector<vector<string>>ans;
        // ans.clear();
        part(s,0,output,ans);
        return ans;
    }
};

