/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<int>nums;
        vector<vector<int>> answer;
        if(root == NULL){
            return answer;
        }
        
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        while(not q.empty()){
            Node* node = q.front();
            q.pop();
               if(node ==NULL){
                   answer.push_back(nums);
                   nums.clear();
                   if(q.empty()){
                       break;
                   }
                   q.push(NULL);
                   continue;
               }  
            nums.push_back(node-> val);
            for(int  i = 0 ; i < node -> children.size(); i++ ){
                q.push(node -> children[i]);
            }
        }
        return answer;
    }
};