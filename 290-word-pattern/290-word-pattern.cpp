class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> pattern_to_word;
        unordered_map<string, char> word_to_pattern;
        
        int start = 0;
        int pattern_index = 0;
        int n = s.length();
        int spaces = 0;
        
        for (int i = 0; i < n; i++)
            if (s[i] == ' ') spaces++;
        
        if (pattern.length() != spaces + 1) return false;
        
        for (int i = 0; i <= n; i++) {
            if (s[i] == ' ' || i == n) {
                string word = s.substr(start, i - start);
                auto pattern_it = pattern_to_word.find(pattern[pattern_index]);
                auto word_it = word_to_pattern.find(word);
                
                if (pattern_it == pattern_to_word.end() &&  word_it == word_to_pattern.end()) {
                    pattern_to_word[pattern[pattern_index]] = word;
                    word_to_pattern[word] = pattern[pattern_index];
                }
                else if (pattern_it != pattern_to_word.end() && word_it != word_to_pattern.end()) {
                    if (pattern_it->second != word) return false;
                }
                else {
                    return false;
                }    
                pattern_index++;
                start = i + 1;
            }
        }
        
        return true;
    }
};