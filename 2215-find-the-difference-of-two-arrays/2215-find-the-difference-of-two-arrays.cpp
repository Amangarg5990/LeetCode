class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> fre1(2001, 0);
        vector<int> fre2(2001, 0);

        // shift by +1000 to handle negatives
        for (int x : nums1) {
            fre1[x + 1000]++;
        }

        for (int x : nums2) {
            fre2[x + 1000]++;
        }

        vector<int> only1, only2;

        for (int i = 0; i < 2001; i++) {
            if (fre1[i] > 0 && fre2[i] == 0) {
                only1.push_back(i - 1000);
            }
            if (fre2[i] > 0 && fre1[i] == 0) {
                only2.push_back(i - 1000);
            }
        }

        return {only1, only2};
    }
};