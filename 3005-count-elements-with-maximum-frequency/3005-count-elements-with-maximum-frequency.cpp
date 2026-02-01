class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        int max=INT_MIN;
        for (auto &it : mp) {
            if (it.second>max) {
                max=it.second;
            }
        }
        int resi=0;
        for (auto &it : mp) {
            if (it.second == max) {
                resi+=max;
            }
        }
        return resi;
    }
};