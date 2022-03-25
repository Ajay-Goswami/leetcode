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
    ListNode* reverseList(ListNode* head) {
        int i=0;
        //initializing some pointer to reverse linked list
        struct ListNode *p1,*p2,*p3,*temp;
        
        //check is head isequal to null or not if null then return
        if(head==NULL)
            return head;
        
        //check how many nodes in linked list
        for(temp=head;temp!=NULL;temp=temp->next)
            i++; 

        //if there is only one linked list then return head
        if(i==1)
            return head;
        
        //if there is more than one linked list
            p2=NULL;
            p1 = head;
            while(p1!=NULL)
            {
                p3=p1->next;
                p1->next=p2;
                p2=p1;
                p1=p3;
            }
    
        head=p2;
        return head;
        }
};


