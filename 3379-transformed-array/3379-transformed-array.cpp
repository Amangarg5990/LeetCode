class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int m = nums.size();
        vector<int> res(m);

        for (int i = 0; i < m; i++) {
            if (nums[i] == 0) {
                res[i] = nums[i];
            } else {
                int idx = (i + nums[i]) % m;
                if (idx < 0) idx += m;
                res[i] = nums[idx];
            }
        }
        return res;
    }
};
