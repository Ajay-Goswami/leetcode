class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        count = count/2;

        temp=head;
        for(int i=0; i<count; i++)
            temp=temp->next;
        return temp;
    }
};