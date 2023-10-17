class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=0,b=0, count=0;
        int h=haystack.size();
        int n=needle.size();
        while(a<h&&b<n){
                count=a;
                while(a<h&&b<n&&haystack[a]==needle[b]){
                    a++;
                    b++;
                }
            if(b>=n)return count;
            else b=0;
            a=count+1;
        }
        return -1;
    }
};