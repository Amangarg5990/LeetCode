// class Solution {
// public:
//     vector<int> constructTransformedArray(vector<int>& nums) {
//         int m = nums.size();
//         vector<int> res(m);

//         for (int i = 0; i < m; i++) {
//             if (nums[i] == 0) {
//                 res[i] = nums[i];
//             } else {
//                 int idx = (i + nums[i]) % m;
//                 if (idx < 0) idx += m;
//                 res[i] = nums[idx];
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int m = nums.size();
        vector<int> res(m);

        for (int i = 0; i < m; i++) {
            if (nums[i] > 0) {
                int k = (i + nums[i] % m) % m;
                res[i] = nums[k];
            }
            else if (nums[i] == 0) {
                res[i] = nums[i];
            }
            else {
                int j = (i + (nums[i] % m) + m) % m;
                res[i] = nums[j];
            }
        }
        return res;
    }
};
