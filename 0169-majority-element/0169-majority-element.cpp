class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &it: mp){
            if(it.second>(n/2)){
                res.push_back(it.first);
            }
        }
        return res[0];
    }
};