class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<e){
            int m=(s+e)/2;
            if(nums[m]>nums[e]){
                s=m+1;
            }
            else if(nums[m]<nums[e]){
                e=m;
            }
            else{
                e--;
            }

        }
        return nums[s];
    }
};