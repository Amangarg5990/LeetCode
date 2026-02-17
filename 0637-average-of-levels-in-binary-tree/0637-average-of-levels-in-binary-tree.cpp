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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root==NULL){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double sum=0;
            int k=0;
            int si=q.size();
            for(int i=0;i<si;i++){
                TreeNode* fr=q.front();
                q.pop();
                sum+=fr->val;
                k++;
                if(fr->left) q.push(fr->left);
                if(fr->right) q.push(fr->right);
            }
            double ave=sum/k;
            res.push_back(ave);

        }
        return res;
    }
};