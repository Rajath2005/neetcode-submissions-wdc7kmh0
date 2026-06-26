class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first = 0;
        int second = 0;

        // Move through both strings until reaching the end of one
        while (first < s.size() && second < t.size()) {
            // If characters match, move the pointer for s
            if (s[first] == t[second]) {
                first++;
            }
            // Always move the pointer for t
            second++;
        }

        // If first reached the end of s, all characters were found in order
        return first == s.size();
    }
};
