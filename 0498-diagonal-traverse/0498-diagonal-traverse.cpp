class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                int k=i+j;
                mp[k].push_back(mat[i][j]);
            }
        }
        int r=mat.size();
        int c=mat[0].size();
        vector<int> ans;
        for(int i=0;i<(r+c-1);i++){
            if(i%2==0){
                reverse(mp[i].begin(),mp[i].end());
            }
            ans.insert(ans.end(),mp[i].begin(),mp[i].end());
            
        }
        return ans;
    }
};