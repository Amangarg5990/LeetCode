class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0;
        int m=0;
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]!=' '){
                m=j;
                break;
            }
        }
        int res=0;
        for(int i=m;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            else{
                res++;
            }
        }
        return res;
    }
};