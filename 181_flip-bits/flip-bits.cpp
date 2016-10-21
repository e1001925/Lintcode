/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/flip-bits
@Language: C++
@Datetime: 16-10-11 03:55
*/

class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int res = 0;
        int i;
        int temp = a ^ b; 
        for(i = 0; i < 32; i++){
            if((temp & 1) == 1){
                res++;
            }
            temp = temp >> 1;
        }
        return res;
    }
};