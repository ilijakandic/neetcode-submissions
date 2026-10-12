class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int min = 9999;
        for(int i = 0 ; i < n; i++){
            if(min > prices[i]){
                min = prices[i];
            }
            if( (prices[i]-min) > profit){
                profit = prices[i] - min;
            }
        }
        return profit;
    }
};
