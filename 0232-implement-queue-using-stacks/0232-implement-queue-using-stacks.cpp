class MyQueue {
public:

    stack<int>s1;
    stack<int>s2;
    int top=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        if(s1.empty()){
            top=x;
        }
        s1.push(x);
    }
    
    int pop() {
        
        while(s1.size()>1){
            s2.push(s1.top());   
            
            top=s1.top();
            s1.pop();
            
        }
        
        int val=s1.top();
        s1.pop();
        while(!s2.empty()){
                
            s1.push(s2.top());
            s2.pop();
            
        }
        
        return val;
        
    }
    
    int peek() {
        
        return top;
    }
    
    bool empty() {
        
        return s1.empty();
        
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