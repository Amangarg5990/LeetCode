class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1){
                return false;

            }
        }

        return nums[n-1] == n-1;

    }
};