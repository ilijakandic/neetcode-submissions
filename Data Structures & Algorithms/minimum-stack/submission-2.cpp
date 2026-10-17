class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        mainn.push(val);
        if(minn.empty() || val < minn.top()){
            minn.push(val);
        }
        else{
            minn.push(minn.top());
        }
    }
    
    void pop() {
        mainn.pop();
        minn.pop();
    }
    
    int top() {
        return mainn.top();
    }
    
    int getMin() {
        return minn.top();
    }
private:
    stack<int> mainn;
    stack<int> minn;
};
