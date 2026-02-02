class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums){
            freq[i]++;

        }
        for(auto &it: freq){
            if(it.second>1){
                return true;
            }
            
        }
        return false;
    }
};