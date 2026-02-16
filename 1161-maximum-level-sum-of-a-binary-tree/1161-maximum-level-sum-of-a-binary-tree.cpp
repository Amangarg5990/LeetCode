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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL){ 
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int result=1;
        int l=1;
        int ma=INT_MIN;
        while(!q.empty()){
            int sum=0;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*frontNode=q.front();
                q.pop();
                sum+=frontNode->val;
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            if(ma<sum){
                ma=sum;
                result=l;
            }
            l++;
        }
        return result;
    }
};