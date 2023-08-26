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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ref=head;
        ListNode *temp=head;
        int count=0;
        if(!head||!head->next)return NULL;
        while(ref){
            count++;
            ref=ref->next;
            // count++;
        }
        if (n >= count) {
            return head->next;
        }
        int k=count-n-1;
        while(k){
            temp=temp->next;
            k--;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete(del);
        return head;
    }
};