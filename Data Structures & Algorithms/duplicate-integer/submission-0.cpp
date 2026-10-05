class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
	    std::unordered_set<int> hashTable;
		hashTable.reserve(nums.size());
	    for (auto& number : nums)
	    {
			if(!(hashTable.insert(number).second)) return true;
	    }
		return false;
    }
};