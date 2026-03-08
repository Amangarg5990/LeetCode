class Solution {
public:
    int hammingWeight(int n) {
        int i = 0;
        int k=0;
        while(k<32){
            if((n & (1 << k)) != 0){
                i++;
            }
            k++;
        }
        return i;
    }
};