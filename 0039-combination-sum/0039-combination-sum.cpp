class Solution {
public:
    void helper(int idx,int tar,vector<int>& st,vector<int> can,vector<vector<int>>& ans){
        if(idx==can.size()){
            if(tar==0){
                ans.push_back(st);
            }
                return; 
        }
        if(can[idx]<=tar){
            st.push_back(can[idx]);
            helper(idx,tar-can[idx],st,can,ans);
            st.pop_back();
        }
        helper(idx+1,tar,st,can,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        helper(0,target,a,candidates,ans);
        return ans;

    }
};