class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long total=0;
        for(int i: nums){
            total+=i;
        }
        long long left=0;
        int c=0;
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            long long right=total-left;
            if(left>=right){
                c++;
            }
        }
        return c;
    }
};