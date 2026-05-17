class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int sta=0;
        int end=n-1;
        while(sta<=end){
            int mid=(sta+end)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[sta]==nums[mid] && nums[mid]==nums[end]){
                sta++;
                end--;
                continue;
            }
            if(nums[sta]<=nums[mid]){
                if(nums[sta]<=target && target<nums[mid]){
                    end=mid-1;
                }
                else{
                    sta=mid+1;
                }
            }
            else{
                if(nums[mid]<target && target<=nums[end]){
                    sta=mid+1;
                } 
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
};