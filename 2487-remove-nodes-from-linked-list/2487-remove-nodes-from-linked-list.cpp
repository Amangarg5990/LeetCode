/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int> res(10003);
        while(temp != NULL){
            res.push_back(temp->val);
            temp=temp->next;
        }
        int n= res.size();
        stack<int> st;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<= res[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(res[i]);
            }
            st.push(res[i]);
            
        }
        reverse(ans.begin(), ans.end());

        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for(int x : ans){
            curr->next = new ListNode(x);
            curr = curr->next;
        }

        return dummy->next;


    }
};