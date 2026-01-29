class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
            res.push_back(nums[i]);
        }
        sort(res.begin(),res.end());
        return res;
    }
};