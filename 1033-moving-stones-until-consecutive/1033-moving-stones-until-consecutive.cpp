class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int mini=0,maxi;
        int x=max(a,max(b,c));
        int z=min(a,min(b,c));
        int y;
if(x==a&&z==b)y=c;
if(z==a&&x==b)y=c;
if(x==b&&z==c)y=a;
if(x==c&&z==b)y=a;
if(x==a&&z==c)y=b;
if(x==c&&z==a)y=b;
        if(x-z==2)return{0,0};
       mini = min(y - z, x - y);
        if(mini<=2)mini= 1;
else mini=2;
        maxi=x-z-2;
            return {mini,maxi};
    }
};