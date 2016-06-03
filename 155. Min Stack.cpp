class MinStack {
public:
    /** initialize your data structure here. */
    deque<int> stack;
    int min = INT_MAX;
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
        if(x < min)
            min = x;
    }
    
    void pop() {
        int tmp = stack.back();
        stack.pop_back();
        if(tmp == min)
            if(stack.begin() == stack.end()) /*Õ»¿Õ*/
                min = INT_MAX;
            else 
                min= *min_element(stack.begin(), stack.end());
        
        
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return min;
    }
};