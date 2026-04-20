class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i=i+2){
            int nu=nums[i+1];
            int cou=nums[i];
            while(cou>0){
                ans.push_back(nu);
                cou--;
            }
        }
        return ans;
    }
};