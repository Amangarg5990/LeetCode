class Solution {
public:
    void dfs(vector<vector<int>>& adj,int src,vector<int>& vis,int& v,int& e){
        vis[src]=1;
        v++;
        e+=adj[src].size();
        for(auto it : adj[src]){
            if(!vis[it]){
            dfs(adj,it,vis,v,e);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int k=0;
        vector<int> vis(n,0);
        for(int i = 0; i <n; i++){
            if(!vis[i]){
                int v=0;
                int e=0;
                dfs(adj,i,vis,v,e);
                if((v*(v-1))==e){
                    k++;
                }
            }
        }
        return k;
    }
};