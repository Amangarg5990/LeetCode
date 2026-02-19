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
    bool SUM(TreeNode* root,int sum,int target){
        if(root==NULL){
            return false;
        }
        sum+=root->val;
        if(root->left==NULL && root->right==NULL && sum==target){
            return true;
        }
        return SUM(root->left,sum,target) || SUM(root->right,sum,target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return SUM(root,sum,targetSum);
    }
};