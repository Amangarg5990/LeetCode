/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> w;
        vector<int> res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int g=q.size();
            for(int i=0;i<g;i++){
                TreeNode* cu= q.front();
                q.pop();
                w[cu->val]++;
                if(cu->left) q.push(cu->left);
                if(cu->right) q.push(cu->right);
            }
        }
        // max in second of map 
        // return first 
        // Step 1: Find max frequency
        int maxi = 0;
        for(auto &it : w){
            maxi = max(maxi, it.second);
        }

        // Step 2: Collect all elements having max frequency
        for(auto &it : w){
            if(it.second == maxi){
                res.push_back(it.first);
            }
        }

        return res;

        
    }
};