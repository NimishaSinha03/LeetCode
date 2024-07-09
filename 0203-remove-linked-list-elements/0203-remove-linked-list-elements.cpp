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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *node=head;
        while(head!=NULL&&head->val==val)head=head->next;
        if(head==NULL)return NULL;
        while(node!=NULL&&node->next!=NULL){
            if(node->next->val==val){
                ListNode *deletee=node->next;
               node->next=node->next->next;
                delete(deletee);
            }
            else node=node->next;
        }
        return head;
    }
};