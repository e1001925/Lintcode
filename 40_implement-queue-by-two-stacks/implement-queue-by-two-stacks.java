/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/implement-queue-by-two-stacks
@Language: Java
@Datetime: 16-03-05 16:28
*/

public class Queue {
    private Stack<Integer> stack1;
    private Stack<Integer> stack2;
    int head=0;

    public Queue() {
       // do initialization if necessary
        stack1 = new Stack<Integer>();
        stack2 = new Stack<Integer>();
    }
    
    public void push(int element) {
        // write your code here
        stack1.push(element);
    }

    public int pop() {
        // write your code here
        int res = 0;
        if(stack2.isEmpty() != true){
            res = stack2.pop();
        }
        else {
            while(stack1.isEmpty() != true){
                stack2.push(stack1.pop());
            }
            res = stack2.pop();
        }
        return res;
    }

    public int top() {
        // write your code here
        int res = 0;
        if(stack2.isEmpty() != true){
            res = stack2.peek();
        }
        else {
            while(stack1.isEmpty() != true){
                stack2.push(stack1.pop());
            }
            res = stack2.peek();
        }
        return res;
    }
}