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
    void inO(TreeNode* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        inO(root->left,ans);
        ans.push_back(root->val);
        inO(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        vector<int> l;
        vector<int> r;
        inO(root1,l);
        inO(root2,r);
        int i=0;
        int j=0;
        while(i<l.size() && j<r.size()){
            if(l[i]<r[j]){
                res.push_back(l[i]);
                i++;
            }
            else{
                res.push_back(r[j]);
                j++;
            }
        }
        while(i<l.size()){
                res.push_back(l[i]);
                i++;
        }
        while(j<r.size()){
                res.push_back(r[j]);
                j++;
        }
        return res;
    }
};