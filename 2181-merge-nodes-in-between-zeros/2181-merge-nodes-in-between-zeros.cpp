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
       int x;
        ListNode *res=NULL ,*tail=NULL;
        head=head->next;
        while(head!=NULL){
            x=0;
            while(head->val!=0){
                x+=head->val;
                head=head->next;
            }
            ListNode *tt=new ListNode(x);
            if(res==NULL)res=tt,tail=tt;
            else tail->next=tt,tail=tt;
            head=head->next;
        }
        return res;
    }
};


 