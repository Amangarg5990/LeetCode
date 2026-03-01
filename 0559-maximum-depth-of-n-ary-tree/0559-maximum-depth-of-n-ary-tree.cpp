/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        int v=0;
        if(root==NULL){
            return v;
        }
        queue<Node* > q1;
        q1.push(root);
        while(!q1.empty()){
            int si=q1.size();
            for(int i=0;i<si;i++){
                Node* cur=q1.front();
                q1.pop();
                for(auto c:cur->children){
                    if(c) q1.push(c);
                }
            }
            v++;
        }
        return v;
    }
};