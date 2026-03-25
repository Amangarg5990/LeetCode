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
    long secondMin = LONG_MAX;
    int minVal;
    void helper(TreeNode* root) {
        if (!root) return;
        if (root->val > minVal && root->val < secondMin) {
            secondMin = root->val;
        }
        helper(root->left);
        helper(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if (!root) return -1;
        minVal = root->val;
        helper(root);
        return secondMin == LONG_MAX ? -1 : secondMin;
    }
};