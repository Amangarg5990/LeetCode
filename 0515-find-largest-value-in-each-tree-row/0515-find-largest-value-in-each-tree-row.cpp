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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode* > q1;
        q1.push(root);
        while(!q1.empty()){
            int m=INT_MIN;
            int si=q1.size();
            for(int i=0;i<si;i++){
                TreeNode* cur=q1.front();
                q1.pop();
                if(m<cur->val){
                    m=cur->val;
                }
                if(cur->left) q1.push(cur->left);
                if(cur->right) q1.push(cur->right);
            }
            res.push_back(m);
        }
        return res;
    }

};