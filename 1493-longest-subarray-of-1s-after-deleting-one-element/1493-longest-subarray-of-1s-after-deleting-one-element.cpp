class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int count=0;
        int maxlen=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                count++;
                while(count>1){
                    if(nums[left]==0){
                        count--;
                    }
                    left++;
                }
            }
                    int len=right-left;
                    maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};