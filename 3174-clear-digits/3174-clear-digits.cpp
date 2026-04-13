class Solution {
public:
    bool nu(char c){
        if(c>='0' && c<='9'){
            return true;
        }
        return false;
    }
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!nu(s[i])){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        string answer="";
        while(!st.empty()){
            answer+=st.top();
            st.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};