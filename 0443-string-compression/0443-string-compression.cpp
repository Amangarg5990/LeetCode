class Solution {
public:
    int compress(vector<char>& chars) {
        vector<pair<char, int>> counts;
        for(char c : chars) {
            if(counts.empty() || counts.back().first != c) {
                counts.push_back({c, 1});
            } else {
                counts.back().second++;
            }
        }
        vector<char> ans;
        for(auto it : counts) {
            ans.push_back(it.first);
            if(it.second > 1) {
                string numStr = to_string(it.second);
                for(char digit : numStr) {
                    ans.push_back(digit);
                }
            }
        }
        
        chars = ans;
        return ans.size();
    }
};