class Stack {
public:
    queue<int> rse,tmp;
    // Push element x onto stack.
    void push(int x) {
        rse.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        while( !rse.empty()){
            tmp.push(rse.front());
            rse.pop();
        }
        while(tmp.size()-1 !=0){
            rse.push(tmp.front());
            tmp.pop();
        }
        tmp.pop();
    }

    // Get the top element.
    int top() {
        return rse.back();
    }

    // Return whether the stack is empty.
    bool empty() {
        return rse.empty();
    }
};
