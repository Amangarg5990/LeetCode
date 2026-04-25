class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i:nums){
            total+=i;
        }
        int left=0;
        for(int i=0;i<n;i++){
            int right=total-left-nums[i];
            if(right==left){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};