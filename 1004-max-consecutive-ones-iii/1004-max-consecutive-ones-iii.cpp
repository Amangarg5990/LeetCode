class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int count = 0;   // number of zeros
        int maxlen = 0;

        for (int right = 0; right < n; right++) {

            if (nums[right] == 0) {
                count++;
            }

            while (count > k) {
                if (nums[left] == 0) {
                    count--;
                }
                left++;
            }

            int len = right - left + 1;
            maxlen = max(maxlen, len);
        }

        return maxlen;
    }
};
