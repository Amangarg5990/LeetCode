class Solution {
public:
    const int m=1e9+7;
    int findPo(long long a, long long b){
        if(b==0){
            return 1;
        }
        long long half=findPo(a,b/2);
        long long result=(half*half)%m;
        if(b%2==1){
            result=(result*a)%m;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        return (long long)findPo(5,(n+1)/2)*findPo(4,n/2)%m;
    }
};