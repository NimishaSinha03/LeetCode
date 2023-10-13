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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* prev = dummy;
        ListNode* curr = head, *next;
        int length=0;
        for(ListNode* i = head; i!=NULL; i=i->next)length++;
        for(int i=0;i<length/k;i++){
            curr=prev->next;
            next=curr->next;
            for(int j=0;j<k-1;j++){
                curr->next=next->next;
//                 above is for the storage purpose
                next->next=prev->next;
                prev->next=next;
                next=curr->next;
//                     the above storage is used over here
            }
            prev=curr;
            // abhi naya head banega curr->next isliye, for the next group, qki curr is the last for the  pehele reversed hua hua group ka
        }
        return dummy->next;
    }
};