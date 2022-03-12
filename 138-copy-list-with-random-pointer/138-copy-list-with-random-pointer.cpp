/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur=head;
        Node* nh=NULL,*tmp=NULL,*end=NULL;
        unordered_map<Node*,Node*> mp;
        
        while(cur!=NULL){ 
            tmp=new Node(cur->val);
            if(nh==NULL){
                nh=tmp;
                end=tmp;
                mp[cur]=nh;// OP1
            }
            else{
                end->next=tmp;
                end=tmp;
                mp[cur]=end;// OP2
            }
            cur=cur->next;
        }
        cur=head;
        end=nh;
        
        while(cur!=NULL){
            if(cur->random==NULL){
                end->random=NULL; 
            }
            else{
                end->random=mp[cur->random];
            }
            end=end->next;
            cur=cur->next;
        }
        return nh;
    }
};