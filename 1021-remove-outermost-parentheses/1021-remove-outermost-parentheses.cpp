class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int lev=0;
        for(char ch:s){
            if(ch=='('){
                if(lev>0){
                    ans+=ch;
                }
                lev++;
            }
            else if(ch==')'){
                lev--;
                if(lev>0){
                    ans+=ch;
                }
            }
        }
        return ans;
     }
};