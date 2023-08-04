class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int ans=0;
        for(int i=0,j=n-1;i<j;i+=1,j-=2){
            ans+=piles[j-1];
        }
        return ans;
    }
};
// we have to add second largest element to the answer , so we are doing that while removing the maximunm and minimum element at the same time by i+=1 and j-=2
