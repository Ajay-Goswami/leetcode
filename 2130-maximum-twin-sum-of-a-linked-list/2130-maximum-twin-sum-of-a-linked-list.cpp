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
    int pairSum(ListNode* head) {
        stack <int> half;

        ListNode* tmp = head;           
        ListNode* ptr = head;

        while (tmp != NULL)
        {
            tmp = tmp->next->next;
            ptr = ptr->next;
        }
        
        tmp = head;
 
        while (tmp != ptr)
        {
            half.push (tmp->val);
            tmp = tmp->next;
        }
        
        int sum = 0;
        int maxsum = 0;
        
        while (tmp != NULL)
        {
            int a = half.top();
            sum = tmp->val + a;
            
            if (sum > maxsum)
                maxsum = sum;
            
            half.pop();
            tmp = tmp->next;
        }
        
        return maxsum; 
    }
};