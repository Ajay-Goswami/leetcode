/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void level_order(Node *root){
        if(root == NULL) return;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int currLevel = q.size();
            Node *prev;
            for(int i=0; i<currLevel; i++){
                Node* temp = q.front();
                q.pop();
                
                // do work here
                if(i>0){
                    prev->next = temp;
                }
                prev = temp;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            prev->next = NULL;
        }
    }
    
    Node* connect(Node* root) {
        level_order(root);
        return root;
    }
};