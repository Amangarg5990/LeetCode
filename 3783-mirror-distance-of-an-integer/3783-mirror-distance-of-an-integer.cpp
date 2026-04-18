class Solution {
public:
    int mirrorDistance(int n) {
        int m=n;
        int r=0;
        while(n>0){
            int k=n%10;
            r=r*10+k;
            n=n/10;

        }
        int t=m-r;
        return abs(t);
    }
};