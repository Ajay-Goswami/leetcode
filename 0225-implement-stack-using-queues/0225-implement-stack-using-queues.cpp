class MyStack {
    queue<int> q1;
    int ans;
public:
    MyStack() {
        ans=-1;
    }
    
    void push(int x) {
        q1.push(x);
        int siz = q1.size()-1;
        while(siz--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        if(q1.empty())
            return ans;
        ans= q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
    
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */