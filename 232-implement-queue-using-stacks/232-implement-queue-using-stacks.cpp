class MyQueue {
public:
    
    stack<int>s1;
    stack<int>s2;
    int val; 
    MyQueue() {
   
    }
    void push(int x) {
        if(s1.empty()){
                val=x;
        }
        s1.push(x); 
    }
    
    int pop() {
        while(s1.size()!=1){
                val=s1.top();
                s2.push(s1.top());
                s1.pop();
        }
        
       int ans=s1.top();
        s1.pop();
        
        while(!s2.empty()){
                
                s1.push(s2.top());
                s2.pop();
        }
        
        return ans;
        
        
    }
    int peek() {
            
        return val;
            
        
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