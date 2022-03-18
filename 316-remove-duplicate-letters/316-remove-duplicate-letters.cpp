class Solution {
public:
    string removeDuplicateLetters(string s) {
        int a[26] = {0}, vis[26] = {0}, n = s.length();
        for (int i = 0; i < n; i++) a[s[i] - 'a']++;
        string ans = "";
        ans += s[0];
        vis[s[0] - 'a'] = 1;
        a[s[0] - 'a']--;
        for (int i = 1; i < n; i++) {
            if (s[i] > ans.back() && !vis[s[i] - 'a']) ans += s[i], vis[s[i] - 'a'] = 1;
            else {
                while (ans.length() && a[ans.back() - 'a'] > 0 && ans.back() > s[i] && !vis[s[i] - 'a']) {
                    char ch = ans.back();
                    ans.pop_back();
                    vis[ch - 'a'] = 0;
                }
                if (!vis[s[i] - 'a']) {
                    ans += s[i];
                    vis[s[i] - 'a'] = 1;
                }
            }
            a[s[i] - 'a']--;   
        }
        return ans;
    }
};