class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> groupAnagrams{};

        std::unordered_map<std::string, std::vector<std::string>> dictionary;

        for (auto& word : strs) {
            // 26 adet '0' (veya '\0') içeren sabit boyutlu bir string (Frekans dizisi)
            std::string count(26, 0);

            for (auto& letter : word) {
                count[letter - 'a']++;  // 'a' -> 0, 'b' -> 1
            }

            dictionary[count].push_back(word);
        }

        for (const auto& anagrams : dictionary) {
            groupAnagrams.push_back(anagrams.second);
        }
        return groupAnagrams;
    }
};
