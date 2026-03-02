class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;
        
        Node* level = root;
        
        while (level->left) {  
            Node* cur = level;
            
            while (cur) {
                // Connect left child to right child
                cur->left->next = cur->right;
                
                // Connect right child to next subtree's left child
                if (cur->next)
                    cur->right->next = cur->next->left;
                
                cur = cur->next;  
            }
            
            level = level->left;  
        }
        
        return root;
    }
};