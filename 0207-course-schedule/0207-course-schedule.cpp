class Solution {
public:
    bool detect(vector<vector<int>>& adj,vector<int>& vis, int src, vector<int>& path){
        vis[src]=1;
        path[src]=1;
        for(auto it: adj[src]){
            if(!vis[it]){
                if(detect(adj,vis,it,path)) return true;
            }
            else if(path[it]){
                return true;
            }
        }
        path[src]=0;
        return false;
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vis(numCourses,0);
        vector<int> path(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(int i = 0; i < prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[u].push_back(v);
        }
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(detect(adj,vis,i, path)){
                    return false;
                }
            }
        }
        return true;
    }
};