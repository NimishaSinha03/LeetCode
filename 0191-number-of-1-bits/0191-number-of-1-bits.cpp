class Solution {
public:
    int hammingWeight(uint32_t n) {
        // string s=to_string(n);
        // int count=0;
        // for(int i=0;n<32;i++){
        //     if(s[i]=='1')count++;
        // }
        // return count;
        int count=0;
        for(int i=0;i<32;i++){
            if(n&1)count++;
            n=n>>1;
        }
        return count;
    }
};