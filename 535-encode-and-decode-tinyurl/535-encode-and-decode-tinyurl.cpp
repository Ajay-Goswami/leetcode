class Solution {
    unordered_map<string,string>Map;
    int i=1;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
       string str="http://url/"+to_string(i);
        i++;
        Map[str]=longUrl;
        return str; 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
                return Map[shortUrl];

    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
