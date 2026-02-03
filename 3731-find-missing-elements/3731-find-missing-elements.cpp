class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int s=*min_element(nums.begin(),nums.end());
        unordered_set<int> st(nums.begin(),nums.end());
        vector<int> res;
        for(int i=s+1;i<m;i++){
            if(!st.count(i)) res.push_back(i);
        }
        return res;
    }
};