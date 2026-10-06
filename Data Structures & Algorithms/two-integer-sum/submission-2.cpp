class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     // Sorting and Two Pointers solution
    std::vector<std::pair<int,int>> tempNums;
    for (int i = 0; i < nums.size(); i++) {
        tempNums.push_back({nums[i], i});
    }

    std::sort(tempNums.begin(), tempNums.end());
	
	int left{0}, right{(int)(tempNums.size() - 1)};

	while (left < right) {
        int current = tempNums[left].first + tempNums[right].first;
        if(current == target){
            return {min(tempNums[left].second, tempNums[right].second),
                    max(tempNums[left].second, tempNums[right].second)};
        } 
		else if (current < target) left++;
		else right--;
	}
    return {};
    }
};
