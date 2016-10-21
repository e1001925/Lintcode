/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/print-numbers-by-recursion
@Language: Java
@Datetime: 16-03-07 03:33
*/

public class Solution {
    /**
     * @param n: An integer.
     * return : An array storing 1 to the largest number with n digits.
     */
    public List<Integer> numbersByRecursion(int n) {
        // write your code here
        int N = 1;
        for(int i = 1;i<=n;i++){
            N = N*10;
        }
        N = N - 1;
        List<Integer> result = new ArrayList<Integer>();
        for(int i =1;i<= N ;i++){
            result.add(i);
        }
        return result;
    }
}