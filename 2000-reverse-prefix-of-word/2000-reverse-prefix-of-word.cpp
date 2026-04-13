class Solution {
public:
    string reversePrefix(string word, char ch) {
        int size = word.size();
    stack<char> st;
    int l = 0;
    bool found = false;

    for(char c : word) {
        st.push(c);
        l++;
        if(c == ch) {
            found = true;
            break;
        }
    }

    // ✅ If character not found → return original
    if(!found) return word;

    string answer = "";

    // reverse prefix
    while(!st.empty()) {
        answer += st.top();
        st.pop();
    }

    // add remaining
    for(int i = l; i < size; i++) {
        answer += word[i];
    }

    return answer;
    }
};