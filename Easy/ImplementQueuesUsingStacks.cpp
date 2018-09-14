/* Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty. */

class MyQueue {
    stack<int> input, output;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        input.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(output.empty())
            populate();
        int val = output.top();
        output.pop();
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        if(output.empty())
        {   
            populate();
        }
        return output.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return input.empty() && output.empty();
    }
    
    void populate(){
        while(!input.empty())
        {
            int val = input.top();
            input.pop();
            output.push(val);
        }
    }
};
