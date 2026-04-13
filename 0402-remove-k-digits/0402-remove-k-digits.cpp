class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int removed = 0;
        for(int i = 0; i < num.size(); i++) {
            while(!st.empty() && st.top() > num[i] && removed < k) {
                st.pop();
                removed++;
            }
            st.push(num[i]);
        }
        while(removed < k) {
            st.pop();
            removed++;
            }
        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i = 0;
        while(i < ans.size() && ans[i] == '0') i++;
        ans = ans.substr(i);
        return ans == "" ? "0" : ans;
    }
};