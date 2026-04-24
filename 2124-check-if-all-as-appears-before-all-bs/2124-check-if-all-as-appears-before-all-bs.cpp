class Solution {
public:
    bool checkString(string s) {
        int lasta=INT_MIN;
        int lastb=INT_MAX;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                if(lastb<i){
                    return false;
                }
                lasta=i;
            }
            else{
                lastb=i;
            }
        }
        return true;
    }
};