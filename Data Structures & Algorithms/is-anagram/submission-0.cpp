class Solution {
public:
    bool isAnagram(string s, string t) {
    std::unordered_map<char, int> countersOfs;
	std::unordered_map<char, int> countersOft;

	for (auto& letter : s)
	{
		if (!(countersOfs.insert(std::pair(letter, 1)).second)) countersOfs[letter]++;
	}
	for (auto& letter : t)
	{
		if (!(countersOft.insert(std::pair(letter, 1)).second)) countersOft[letter]++;
	}
	bool isNotAnagram{ false }; // If they are anangram, it's false. If they are not anangram, it's true 
	if (countersOfs.size() != countersOft.size())
    {
        // Is there a character that one of it has but the other one does not?
      isNotAnagram = true;
      return !isNotAnagram;
    }  
    
	// Counter control for each unique characters respectively.
	for (auto& letter : s)
	{
		if (!(countersOft.contains(letter)))
		{
			isNotAnagram = true;
			break;
		}
		if (!(countersOfs[letter] == countersOft[letter])) {
			isNotAnagram = true;
			break;
		}
	}
    
    return !isNotAnagram;
    }
};
