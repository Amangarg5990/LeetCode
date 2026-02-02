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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dum=new ListNode(-1);
        ListNode* temp3=dum;
        int sum=0;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                if(sum>0){
                ListNode* temp2=new ListNode(sum);
                temp3->next=temp2;
                temp3=temp3->next;
                sum=0;
                }
            }
            temp=temp->next;
        }
        return dum->next;

    }
};