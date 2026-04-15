class Solution {
public:
    int reverse(int x) {
            long re=0;
            while(x){
                re=10*re+(x%10);
                x=x/10;
            }
            if(re>INT_MAX || re<INT_MIN){
                return 0;
            }
            return (int)re;
        }
};