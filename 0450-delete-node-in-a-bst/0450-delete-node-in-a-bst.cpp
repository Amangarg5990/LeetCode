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
 //step-1: Find the node to be deleted by comparisons
 //step-2: restructure its children while preserving BST Order
    // There can be 3 cases for deleting a node:
     //case 1: no childern (leaf Node) -> this can be delete directly.
     //case 2: one children -> replace the current node with its only child
     //case 3: two children -> to maintain the BST Order, we need either choose inorddr successor (smallest value in RST) or inorder predecessor(largest value in LST) and replace with current Node. 
class Solution {
public:
    TreeNode* inorderSuc(TreeNode* node){
        while(node->left!=NULL){
            node=node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL){
            return NULL;
        }
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else{

            //Case 1: Node has no left Child
            //in this case we replace the node with the right child;
            if(root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            //case 2: Node has no right Child
            //in this case we replace the node with the left child;
            else if(root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            //case 3: Node has 2 child
            //find inorder successor from rst 
            TreeNode* temp=inorderSuc(root->right);
            //copy the value in the node which we were suppose to del.
            root->val=temp->val;
            //delete the successor from bst (as we have already copied the value);
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};