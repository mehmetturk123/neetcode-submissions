class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash Map solution

        std::unordered_map<int, int> previousMap{};  // nums[i] -> i (value to index)

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (previousMap.contains(complement)) {
                return std::vector<int>{ previousMap[complement], i };
            }
            previousMap[nums[i]] = i;
        }
        return {};
    }
};
