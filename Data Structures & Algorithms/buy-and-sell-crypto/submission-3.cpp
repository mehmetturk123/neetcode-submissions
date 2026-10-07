class Solution {
public:
    int maxProfit(vector<int>& prices) {
		// Dynamic Programming approach. Intuition gained from solution
		int minBuy{prices[0]};
		int maxP{};

		// I do not need reference.
		// int is small enough to copy, no burden added.
		// Code will not change the elements of prices.
		for(int sell: prices){
			if(maxP < sell - minBuy) maxP = sell - minBuy;
			if(sell < minBuy) minBuy = sell;
		}
		
		return maxP;
    }
};
