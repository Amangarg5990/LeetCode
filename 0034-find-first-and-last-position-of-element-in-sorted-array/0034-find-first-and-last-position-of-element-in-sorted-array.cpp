class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                first=m;
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        s=0;
        e=n-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                last=m;
                s=m+1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return {first, last};
    }
};