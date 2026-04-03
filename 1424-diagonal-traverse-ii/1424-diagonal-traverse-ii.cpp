class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                int k=i+j;
                mp[k].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(int i=0;mp.count(i);i++){
            ans.insert(ans.end(),mp[i].begin(),mp[i].end());
        }
        return ans;
    }
};