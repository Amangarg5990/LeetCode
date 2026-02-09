class Solution {
public:
    string reverseWords(string s) {
        // int n=s.size();
        // string ans="";
        // reverse(s.begin(),s.end());
        // for(int i=0;i<n;i++){
        //     string word="";
        //     while(i<n && s[i]!=' '){
        //         word+=s[i];
        //         i++;
        //     }
        //     reverse(word.begin(),word.end());
        //     if(word.length()>0){
        //         ans+=' '+word;
                
        //     }
        // }
        // return ans.substr(1);
        int n = s.size();
    stack<string> st;
    string a = "";

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            if (!a.empty()) {
                st.push(a);
                a = "";
            }
        } else {
            a.push_back(s[i]);
        }
    }
    if (!a.empty()) {
        st.push(a);
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
        if (!st.empty()) ans += " ";
    }
    return ans;
    }
};