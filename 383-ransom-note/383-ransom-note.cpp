class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int frequency[26] = { 0 };
        
        for (const char& c : ransomNote)
            frequency[c - 'a']--;
        for (const char& c : magazine)
            frequency[c - 'a']++;
        
        for (int i = 0; i < 26; i++)
        {
            if (frequency[i] < 0)
                return false;
        }
        
        return true;
    }
};