class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = INT_MAX;
        for(int i : prices){
            min_price = min(min_price, i);
            max_profit = max(max_profit, i-min_price);
        }
        return max_profit;
        
    }
};
