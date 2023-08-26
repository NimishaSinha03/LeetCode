/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int acount=0,bcount=0;
        ListNode *a=headA,*b=headB;
        while(a->next!=NULL){
            acount++;
            a=a->next;
        }
        while(b->next!=NULL){
            bcount++;
            b=b->next;
        }
        while(acount>bcount){
            acount--;
            headA=headA->next;
        }
        while(bcount>acount){
            bcount--;
            headB=headB->next;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
    
};

