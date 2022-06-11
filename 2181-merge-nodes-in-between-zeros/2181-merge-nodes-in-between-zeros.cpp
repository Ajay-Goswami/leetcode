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
        ListNode *p = new ListNode();
        p = head;
            
        while(p->next != NULL){
            while(p->next->val != 0){
                p->val = p->val + p->next->val;
                ListNode *q = new ListNode();
                q = p->next;
                p->next = q->next;
                delete q;
            }
            p = p->next;
        }
        ListNode *q = head;
        while(q->next != p){
            q = q->next;
        }
        q->next = NULL;
        delete p;
        
        return head;
    }
};


 