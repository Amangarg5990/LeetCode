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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // vector<vector<int>> v;
        // if(root == NULL) return v;
        // queue<TreeNode*> q;
        // q.push(root);
        // while(!q.empty()){
        //     int size = q.size();
        //     vector<int> level;
        //     for(int i = 0 ; i< size ; i++){
        //         TreeNode* node = q.front();
        //         q.pop();
        //         if(node->left != NULL) q.push(node->left);
        //         if(node->right != NULL) q.push(node->right);
        //         level.push_back(node->val);
        //     }
        //     v.push_back(level);
        // }
        // return v;


        vector<vector<int>> result;
        if(root==NULL){ 
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> levelElements;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*frontNode=q.front();
                q.pop();
                levelElements.push_back(frontNode->val);
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            result.push_back(levelElements);
        }
        return result;
    }
};