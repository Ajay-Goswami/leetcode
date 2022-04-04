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
    ListNode* swapNodes(ListNode* head, int k) {
        k=k-1;
        ListNode *firstNum =head;
        while(k>0){
            firstNum = firstNum->next;
            k--;
        }
        ListNode *f = firstNum;
        ListNode *SecondNum =head;
        while( f->next != NULL){
            SecondNum = SecondNum->next;
            f= f->next;
        }
        int temp = firstNum->val;
        firstNum->val = SecondNum->val;
        SecondNum->val = temp;
        
        return head;
    }
};