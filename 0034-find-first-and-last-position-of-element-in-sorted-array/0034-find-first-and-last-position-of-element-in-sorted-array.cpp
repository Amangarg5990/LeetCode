class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int fi=-1;
        int las=-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                fi=m;
                e=m-1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        s=0;
        e=n-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                las=m;
                s=m+1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return {fi,las};
    }
};