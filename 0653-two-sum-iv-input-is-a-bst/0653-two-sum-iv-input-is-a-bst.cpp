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
    vector<int> in(TreeNode* root){
        vector<int> ans;
        if(root== NULL){
            return ans;
        }
        vector<int>l;
        vector<int>r;
        l=in(root->left);
        ans.insert(ans.end(),l.begin(),l.end());
        ans.push_back(root->val);
        r=in(root->right);
        ans.insert(ans.end(),r.begin(),r.end());
        return ans;
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        vector<int> arr;
        arr=in(root);
        int left = 0, right = arr.size() - 1;
        while (left < right){
            int sum = arr[left] + arr[right];
            if (sum == k)
                return true;
            else if (sum < k)
                left++; 
            else
                right--; 
        }
        return false;
    }
};