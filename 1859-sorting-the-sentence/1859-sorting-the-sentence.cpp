class Solution {
public:
    string sortSentence(string s) {
        // string ans="";
        // vector<pair<int,string>> g;
        // string temp="";
        // for(int i=0;i<s.size();i++){
        //     if(isalpha(s[i])){
        //         temp+=s[i];
        //     }
        //     else if(isdigit(s[i])){
        //         g.push_back({s[i]-'0',temp});
        //         temp="";
        //     }
        // }
        // sort(g.begin(),g.end());
        // for(int i=0;i<g.size();i++){
        //     ans+=g[i].second;
        //     if(i!=g.size()-1){
        //         ans += " ";
        //     }
        // }
        // return ans;
        vector<string> g(10);
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                temp += s[i];
            }
            else if (isdigit(s[i])) {
                int pos = s[i] - '0';
                g[pos] = temp;
                temp = "";
            }
        }
        string ans = "";
        for (int i = 1; i < g.size(); i++) {
            if (g[i] != "") {
                if (!ans.empty()) ans += " ";
                ans += g[i];
            }
        }
        return ans;
    }
};