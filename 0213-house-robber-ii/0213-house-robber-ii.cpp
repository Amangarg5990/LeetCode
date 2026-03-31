class Solution {
public:
    int helper(vector<int>& dp, int idx, vector<int>& nums, int start) {
        if (idx < start) return 0;
        if (dp[idx] != -1) return dp[idx];

        int take = nums[idx] + helper(dp, idx - 2, nums, start);
        int skip = helper(dp, idx - 1, nums, start);

        return dp[idx] = max(take, skip);
    }

    int solve(vector<int>& nums, int start, int end) {
        vector<int> dp(nums.size(), -1);
        return helper(dp, end, nums, start);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        return max(solve(nums, 0, n - 2), solve(nums, 1, n - 1));
    }
};