class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int maxprofit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[p]){
                p=i;
            }
            else
                maxprofit=max(maxprofit,prices[i]-prices[p]);
        }
        return maxprofit;
    }
};
