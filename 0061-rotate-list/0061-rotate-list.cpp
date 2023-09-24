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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||k==0)return head;
        // to find no. of nodes
        ListNode* counter=head;
        int count=1;
        while(counter->next){
            count++;
            counter=counter->next;
        }
        k=k%count;
        if(k==0)return head;
        counter->next=head;
        counter=head;
        for(int i=0;i<count-k-1;i++){
            counter=counter->next;
        }
        ListNode* ans=NULL;
        ans=counter->next;
        counter->next=NULL;
        return ans;
    }
};