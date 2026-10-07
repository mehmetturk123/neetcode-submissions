class Solution {
public:
    int maxProfit(vector<int>& prices) {
		// Dynamic Programming approach. Intuition gained from solution
		int minBuy{prices[0]};
		int maxP{};

		for(int& sell: prices){
			if(maxP < sell - minBuy) maxP = sell - minBuy;
			if(sell < minBuy) minBuy = sell;
		}
		
		return maxP;
    }
};
