class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int sum=accumulate(cp.begin(),cp.begin()+k,0);
        int ans=sum;
        for(int  i=0;i<k;i++){
//             peechhe se add krne ka, aur aage vale arrray ka last element subtract krne ka, tera kaam ho jaayega vats
            sum+=cp[cp.size()-i-1]-cp[k-i-1];
            ans=max(ans,sum);
        }
        return ans;
    }
};