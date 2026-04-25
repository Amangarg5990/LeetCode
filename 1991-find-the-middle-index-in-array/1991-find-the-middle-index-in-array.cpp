class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> last(n);
        vector<int> dirst(n);
        last[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            last[i]=last[i-1]+nums[i];
        }
        dirst[nums.size()-1]=nums[n-1];
        for(int j=n-2;j>=0;j--){
            dirst[j]=dirst[j+1]+nums[j];
        }
        for(int i=0;i<n;i++){
            if(dirst[i]==last[i]){
                return i;
            }
        }
        return -1;
    }
};