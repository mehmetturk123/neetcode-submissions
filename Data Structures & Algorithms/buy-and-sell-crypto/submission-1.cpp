class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int maxProfit{}, profit{};
	size_t sizeOfPrices{ prices.size() };
    int i{0}, k{1};
	while (i + k < sizeOfPrices) {
		profit = prices.at(i + k) - prices.at(i);
		if (profit < 0){
			i++;
			k = 1;
		}
		else k++;
		if (profit > maxProfit) maxProfit = profit;
	}
	return maxProfit;
    }
};
