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
        if(head==nullptr)
            return head;
        ListNode* temp=head;
        ListNode* prev = nullptr;
        while(temp!=nullptr){
            if(temp->val==val){
                if(prev==nullptr)
                    head=temp->next;
                else{
                    prev->next=temp->next;
                }
                temp=temp->next;
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};