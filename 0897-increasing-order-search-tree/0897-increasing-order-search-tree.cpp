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
    vector<int> ans;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode* new_root=new TreeNode(ans[0]);
        TreeNode* temp=new_root;
        for(int i=1;i<ans.size();i++){
            TreeNode* ne=new TreeNode(ans[i]);
            temp->right=ne;
            temp=temp->right;
        }   
        return new_root;
    }
};