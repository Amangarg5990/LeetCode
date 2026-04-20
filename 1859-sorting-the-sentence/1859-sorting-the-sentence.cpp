class Solution {
public:
    string sortSentence(string s) {
        string ans="";
        vector<pair<int,string>> g;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                temp+=s[i];
            }
            else if(isdigit(s[i])){
                g.push_back({s[i]-'0',temp});
                temp="";
            }
        }
        sort(g.begin(),g.end());
        for(int i=0;i<g.size();i++){
            ans+=g[i].second;
            if(i!=g.size()-1){
                ans += " ";
            }
        }
        return ans;
    }
};