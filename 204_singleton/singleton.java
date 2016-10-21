/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/singleton
@Language: Java
@Datetime: 16-03-05 08:37
*/

class Solution {
    /**
     * @return: The same instance of this class every time
     */private final static Solution INSTANCE = new Solution();
     
    public static Solution getInstance() {
        // write your code here
        
            return INSTANCE;

    }
};