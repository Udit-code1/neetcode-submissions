class MinStack {
public:
    stack<int>st;
    stack<int>minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        int u=minst.empty() ? val : min(val,minst.top());
        minst.push(u);
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
