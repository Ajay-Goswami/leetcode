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
        if(head == NULL || head->next==NULL || k==0){
            return head;
        }
        
        int length=1;
        ListNode *tail = head;
        
        while(tail->next !=NULL){
            length++;
            tail = tail->next;
        }
        
        k=k % length;
        
        if(k!=0){
            ListNode *current = head;
            int count =1;
            while (count <length -k){
                current = current->next;
                count++;
            }
            
            ListNode *nextNode= current->next;
            current->next=NULL;
            tail->next= head;
            head= nextNode;
        }
        return head;
    }
};