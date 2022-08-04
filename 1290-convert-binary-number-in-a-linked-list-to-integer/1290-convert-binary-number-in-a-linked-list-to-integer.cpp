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
    int helper(ListNode*head,int &count){ 
        //base case
        if(head->next==NULL)
        {
            return head->val;
        }
        int k=helper(head->next,count);
        //increasing count by 2 evertime
        count*=2;
        k+=head->val*count;
        return k;
    }
    int getDecimalValue(ListNode* head) {
        int count=1;
        return helper(head,count); 
    }
};