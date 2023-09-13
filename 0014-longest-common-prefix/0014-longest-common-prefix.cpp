class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        // kuki hame common prefix sabse chhote ke andr hi milega kuki common toh uske andar aayega hi
        string a="", s=strs[0], l=strs[strs.size()-1];
        // s aur l m had se had jo diffrence hoga vahi maximum diffrence kisi bhi 2 string out of the array, so ham bas first and last ko compare karenge as the the difference b/w them is the most, and getting the common prefix out of the two will give the "longest common prefix"
        for(int i=0;i<s.size();i++){
            if(s[i]==l[i])a+=s[i];
            else break;
        }
        return a;
    }
};