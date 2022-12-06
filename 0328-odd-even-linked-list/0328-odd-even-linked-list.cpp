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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) 
            return head;
        ListNode *prev=head,*curr=head->next,*temp=head->next;
        while(prev->next && curr->next){
            prev->next=curr->next;
            curr->next=prev->next->next;
            
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=temp;
        return head;
    }
};