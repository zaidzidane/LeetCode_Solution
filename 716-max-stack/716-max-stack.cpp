class MaxStack {
public:
    
    stack<int>s1;
    stack<int>max_;
    MaxStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(max_.empty()){
            max_.push(x);
        }
        else{
                if(max_.top()<=x){
                        max_.push(x);
                }
        }
        
    }
    
    int pop() {
          int val=s1.top();
        if(s1.top()==max_.top()){
                s1.pop();    
                max_.pop();
        }
        else
            s1.pop();
        
        return val;
        
    }
    
    int top() {
        
       return s1.top();
        
    }
    
    int peekMax() {
       return max_.top(); 
    }
    
    int popMax() {
        int val=max_.top();
        max_.pop();
        stack<int>temp;
        while(s1.top()!=val){
                temp.push(s1.top());
                s1.pop();
        }
        s1.pop();
        while(!temp.empty()){
                int x=temp.top();    
                s1.push(x);
                if(max_.empty()){
                    max_.push(x);
                }
                else{
                        if(max_.top()<=x){
                                max_.push(x);
                        }
                }
                temp.pop();
        }
        
        return val;
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */