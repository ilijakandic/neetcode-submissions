class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minBuy=prices[0];
       int profit=0;
       for(int &price:prices){
        profit = max(price-minBuy,profit);
        minBuy=min(minBuy,price);
       } 
       return profit;
    }
};
