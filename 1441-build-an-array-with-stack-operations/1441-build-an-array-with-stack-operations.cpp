class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int i = 0;
        for (int num = 1; num <= n; num++) {
            ops.push_back("Push");
            if (i < target.size() && num == target[i]) {
                i++;  // keep the number
                if (i == target.size()) break; // target completed
            } else {
                ops.push_back("Pop"); // discard number
            }
        }
        
        return ops;
    }
};