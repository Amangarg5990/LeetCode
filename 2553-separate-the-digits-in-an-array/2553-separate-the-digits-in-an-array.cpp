class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i: nums){
            string k=to_string(i);
            for(int j=0;j<k.size();j++){
                ans.push_back(k[j]-'0');
            }
        }
        return ans;
    }
};