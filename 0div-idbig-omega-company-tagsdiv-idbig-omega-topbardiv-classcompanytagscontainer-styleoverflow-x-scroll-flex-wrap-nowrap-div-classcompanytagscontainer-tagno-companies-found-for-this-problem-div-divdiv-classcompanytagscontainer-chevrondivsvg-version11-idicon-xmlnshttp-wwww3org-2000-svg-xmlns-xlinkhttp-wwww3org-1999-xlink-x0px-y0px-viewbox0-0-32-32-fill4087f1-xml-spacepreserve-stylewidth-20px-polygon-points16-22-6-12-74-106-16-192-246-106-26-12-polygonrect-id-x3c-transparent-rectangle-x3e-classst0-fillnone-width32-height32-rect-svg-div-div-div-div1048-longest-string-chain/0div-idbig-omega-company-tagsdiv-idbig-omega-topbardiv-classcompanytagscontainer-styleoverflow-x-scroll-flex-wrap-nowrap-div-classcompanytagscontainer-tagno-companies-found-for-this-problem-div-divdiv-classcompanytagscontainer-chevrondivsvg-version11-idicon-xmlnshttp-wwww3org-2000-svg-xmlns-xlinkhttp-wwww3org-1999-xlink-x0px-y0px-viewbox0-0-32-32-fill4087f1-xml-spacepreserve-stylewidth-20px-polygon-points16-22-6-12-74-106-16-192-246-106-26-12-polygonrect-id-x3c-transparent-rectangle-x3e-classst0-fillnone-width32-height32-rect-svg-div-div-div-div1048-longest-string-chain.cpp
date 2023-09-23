class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.length() < b.length();
        });

        unordered_map<string, int> dp;
        int ans = 0;

        for(auto &word: words){
            dp[word] = 1;

            for(int i = 0 ; i < word.size() ; i++){
                string reducedWord = word.substr(0, i) + word.substr(i + 1) ;

                if(dp.find(reducedWord) != dp.end())
                    dp[word] = max(dp[word], dp[reducedWord] + 1) ;
            }
            ans = max(ans, dp[word]) ;
        }
        return ans;
    }
};