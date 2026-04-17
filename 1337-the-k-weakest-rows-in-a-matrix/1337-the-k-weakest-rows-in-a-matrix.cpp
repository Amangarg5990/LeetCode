class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // vector<pair<int,int>> nums;
        priority_queue<pair<int,int>> pq;
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            int f=0;
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    f++;
                }
            }
            pq.push({f,i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            int m=pq.top().second;
            pq.pop();
            ans.push_back(m);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};