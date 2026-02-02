class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        if(n==4){
            return false;
        }
            int m=0;
            while(n>0){
                int l=n%10;
                m+=l*l;
                n=n/10;
            }
            return isHappy(m);
    }
};