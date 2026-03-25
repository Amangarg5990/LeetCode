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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root==NULL){
            return root;
        }
        if(depth==1){
            TreeNode* nr=new TreeNode(val);
            nr->left=root;
            nr->right=NULL;
            return nr;
        }
        TreeNode* temp=root;
        queue<TreeNode* > q;
        q.push(temp);
        int currDepth=1;
        while(!q.empty()){
            int size = q.size();
            if (currDepth == depth - 1) {
                for (int i = 0; i < size; i++) {
                    TreeNode* node = q.front();
                    q.pop();
                    TreeNode* leftNode = new TreeNode(val);
                    TreeNode* rightNode = new TreeNode(val);
                    leftNode->left = node->left;
                    rightNode->right = node->right;
                    node->left = leftNode;
                    node->right = rightNode;
                }
                break;
            }
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            currDepth++;
        }
    return root;
    }
};