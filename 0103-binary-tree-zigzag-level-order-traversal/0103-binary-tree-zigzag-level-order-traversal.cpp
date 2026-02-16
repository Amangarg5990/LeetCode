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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){ 
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
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
            if(level%2==0){
                result.push_back(levelElements);
            }
            else{
                reverse(levelElements.begin(),levelElements.end());
                result.push_back(levelElements);
            }
            level++;
        }
        return result;
    }
};