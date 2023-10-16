class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int profit=0;
        while(prices.size()>j)
        {if(prices[i]<prices[j]){
            profit+=prices[j]-prices[i];
            i++;
            j++;
        }
         else {
             i++;
             j++;
         }
        }
        return profit;
    }
};