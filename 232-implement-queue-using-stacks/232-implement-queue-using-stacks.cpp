class MyQueue {
public:
    stack<int> s;
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int>p;
        while(s.size()!=1){
            int n=s.top();
            s.pop();
            p.push(n);
        }
        int k=s.top();
        s.pop();
        while(!p.empty()){
            int n=p.top();
            p.pop();
            s.push(n);
        }
        return k;
    }
    
    int peek() {
        stack<int>p;
        while(s.size()!=1){
            int n=s.top();
            
            s.pop();
            p.push(n);
        }
        int k=s.top();
        while(!p.empty()){
            int n=p.top();
            p.pop();
            s.push(n);
        }
        return k;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */