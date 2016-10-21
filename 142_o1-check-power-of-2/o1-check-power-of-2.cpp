/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/o1-check-power-of-2
@Language: C++
@Datetime: 16-10-11 07:27
*/

class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {  //pay attention to the minus
        // write your code here
        //below is O(n) solution with very strange problem in lintcode when n is 2147483648 or -2147483648, which is too big
        /*int res = 0;
        int i;
        for(i = 0; i < sizeof(int)*8; i++){
            if((n & 1) == 1){
                res++;
            }
            cout<<(n & 1);
            if(res > 1){
                return false;
            }
            n = n>>1;
        }
        if (res == 1){
            return true;
        }
        return false;*/


// O(1):
        if(n <= 0){
            return false;
        }
        int res = 0;
        res = (n & (n-1));
        if(res == 0){
            return true;
        }
        return false;
    }
};