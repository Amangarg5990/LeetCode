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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long > result;
        if(root==NULL){ 
            return -1;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long long sum=0;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*frontNode=q.front();
                q.pop();
                sum+=frontNode->val;
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            result.push_back(sum);
        }
        sort(result.begin(),result.end());
        if(k>result.size()) return -1;
        return result[result.size()-k];
    }
};