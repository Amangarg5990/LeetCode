class Solution {
public:
    bool check(string &s, int i, int e) {
        while (i < e) {
            if (s[i] != s[e]) return false;
            i++;
            e--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, e = s.length() - 1;

        while (i < e) {
            if (s[i] == s[e]) {
                i++;
                e--;
            } else {
                // your "w++" idea → try skipping once
                return check(s, i + 1, e) || check(s, i, e - 1);
            }
        }
        return true;
    }
};
