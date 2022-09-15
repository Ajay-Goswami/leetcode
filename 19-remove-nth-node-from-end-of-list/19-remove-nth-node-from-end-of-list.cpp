class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        for(int i=0;i<=n;i++){
            if (fast == nullptr)
                return head->next;
            fast = fast->next;
        }
        
        while(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return head;
    }
};


