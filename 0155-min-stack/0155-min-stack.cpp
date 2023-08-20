class MinStack {
public:
    
    stack<int>stk;
    stack<int>minim;
    
    MinStack() {
        int cnt=0;
    }
    
    void push(int val) {
        
        stk.push(val);
        if(minim.size()==0){
                minim.push(val);
                return;
        }
        
        int v=min(minim.top(),val);
        minim.push(v);
    }
    
    void pop() {
        
        stk.pop();
        minim.pop();
    }
    
    int top() {
        return stk.top();   
    }
    
    int getMin() {
        
        return minim.top(); 
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */