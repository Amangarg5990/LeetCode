class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);
        if(k==0){
            for(int i=0;i<n;i++) ans[i] = 0;
        }
        else if(k>0){
            for(int i=0;i<n;i++){
                int sum = 0;
                for(int j=1;j<=k;j++){
                    int idx= (i+j)%n;
                    sum+=code[idx];
                }
                ans[i] = sum;
            }
        }
        else{
            k = abs(k);
            for(int i=0;i<n;i++){
                int sum = 0;
                for(int j=1;j<=k;j++){
                    int idx= (i-j+n)%n;
                    sum+=code[idx];
                }
                ans[i] = sum;
            }
        }
        return ans;
    }
};