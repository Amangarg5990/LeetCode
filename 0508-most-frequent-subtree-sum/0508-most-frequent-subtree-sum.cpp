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
    unordered_map<int,int> freq;
    int ma;
    int dfs(TreeNode* root){
        if(!root){
            return 0;
        }
        int sum=root->val+dfs(root->left)+dfs(root->right);
        freq[sum]++;
        ma=max(ma,freq[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> res;
        for(auto& p : freq){
            if(p.second==ma){
                res.push_back(p.first);
            }
        }
        return res;
    }
};