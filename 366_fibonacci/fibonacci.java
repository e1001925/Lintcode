/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/fibonacci
@Language: Java
@Datetime: 16-03-03 17:11
*/

class Solution {
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    public int fibonacci(int n) {
        // write your code here
        int res = 0;
        int num1 = 0;
        int num2 = 1;
        if (n > 2){
        for(int i = 2; i < n; i++){
            res = num2 + num1;
            num1 = num2;
            num2 = res;
        }
        return res;
            
        }
        else if (n == 2){
            return 1;
        }
        else {
            return 0;}
    }
}

