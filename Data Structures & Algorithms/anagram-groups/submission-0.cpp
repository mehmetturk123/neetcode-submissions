class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> groupAnagrams{};

        std::unordered_map<std::string, std::vector<std::string>> dictionary;

        for (auto& word : strs) {
            std::unordered_map<char, int> countWord{};
            for (auto& letter : word) {
                countWord[letter]++;
            }
            dictionary[makeKey(countWord)].push_back(word);
        }

        for (const auto& anagrams : dictionary) {
            groupAnagrams.push_back(anagrams.second);
        }
        return groupAnagrams;
    }
    std::string makeKey(const std::unordered_map<char, int>& count) {
        std::vector<std::pair<char, int>> vec(count.begin(), count.end());
        std::sort(vec.begin(), vec.end());

        std::string key;
        for (const auto& i : vec) {
            key += i.first;
            key += std::to_string(i.second);
            key += '#';  // Ayraç
        }
        return key;
    }
};
