class Solution {
public:
    string intToRoman(int n) {
        string ans="";
        vector<int>num={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        vector<string>rom={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        for(int i=12;i>=0;i--){
            while(n>=num[i]){
                ans+=rom[i];
                n-=num[i];
            }
        }
        return ans;
    }
};