class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = -1; 
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                int current_num = 0;
                while (i < n && isdigit(s[i])) {
                    current_num = current_num * 10 + (s[i] - '0');
                    i++;
                }
                if (current_num <= prev) {
                    return false;
                }
                prev = current_num;
            }
        }
        return true;
    }
};