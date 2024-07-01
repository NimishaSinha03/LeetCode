class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        // for(int i=1;i<prices.size();i++){
        //     profit+=max(0,prices[i]-prices[i-1]);
        // }
        // return profit;
        
        int i=0,j=1;
        while(j<prices.size()){
            if(prices[j]-prices[i]>0)profit+=prices[j]-prices[i];
            i++;j++;
        }
        return profit;
    }
};