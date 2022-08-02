class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *evenHead = head->next;
        ListNode *even = evenHead;
        ListNode *odd = head;
        
        while(odd->next != NULL && even->next != NULL){
            odd->next = even->next;
            odd = even->next;
            even->next = odd->next;
            even = odd->next;
        }
        odd->next = evenHead;
        return head;
    }
};