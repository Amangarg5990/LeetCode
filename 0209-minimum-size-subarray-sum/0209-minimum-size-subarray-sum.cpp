class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int co=INT_MAX;
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];

            while(sum>=target){
                sum-=nums[i];
                int len=j-i+1;
                co=min(len,co);
                i++;
            }
        }
        return (co==INT_MAX)?0:co;

    }
};