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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        temp=head;
        int rem=len%k;
        // int sz=len/k;
        while(temp!=NULL){
            int sz=len/k;
            ListNode *first=temp;
            ListNode *prev;
            while(sz){
                prev=temp;
                temp=temp->next;
                sz--;
            }
            if(rem){
                prev=temp;
                temp=temp->next;
                rem--;
            }
            ans.push_back(first);
            prev->next=NULL;
        }
            while(ans.size()<k){
                ans.push_back(NULL);
            }
            return ans;
    }
};