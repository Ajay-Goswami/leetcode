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
    ListNode* swapPairs(ListNode* head) {
       // if head of list is NULL OR just having a single element, then return head no need to change anything 
        if(head == NULL || head -> next == NULL) 
        {
            return head;
        }
            
        ListNode* temp; // create a temp pointer to store head -> next
        temp = head->next; 
        //swapping adjacent nodes
        head->next = swapPairs(head->next->next);
        temp->next = head; 
        
        return temp; 
    }
};