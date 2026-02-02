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
    ListNode* rev(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr){
            ListNode* nxt = curr->next;
            curr->next=prev;
            prev = curr;
            curr=nxt;
        }
        return prev;
    }
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* newHead = rev(head);
        vector<int> ans;
        stack<int> st;
        ListNode* temp = newHead;
        while(temp){
            int data = temp->val;
            while(!st.empty() && st.top()<=data) st.pop();
            if(st.empty()) ans.push_back(0);
            else ans.push_back(st.top());
            st.push(data);
            temp = temp->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};