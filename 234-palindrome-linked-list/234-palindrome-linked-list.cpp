class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head or !head->next)
            return true;
        stack<int> s;
        auto temp=head;
        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        while(head){
            int x=s.top();s.pop();
            if(head->val!=x)
                return false;
            head=head->next;
        }
        return true;
    }
};