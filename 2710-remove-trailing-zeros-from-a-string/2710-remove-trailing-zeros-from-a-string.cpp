class Solution {
public:
    string removeTrailingZeros(string num) {
        int k=0;
        for(int i=num.size()-1;i>=0;i--){

            if(num[i]!='0'){
                k=i;
                break;
            }
        }
        return num.substr(0,k+1);
    }
};