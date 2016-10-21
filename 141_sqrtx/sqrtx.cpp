/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/sqrtx
@Language: C++
@Datetime: 16-08-17 02:47
*/

class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        long target = x;
        long start = 1;
        long end = x;
        long mid = start + (end - start)/2;
        
        while(start + 1 < end){
            if(mid*mid > target){
                end = mid;
            }
            else if(mid*mid < target){
                start++;
            }
            else if(mid*mid == target){
                return (int)mid;
            }
            mid = start + (end - start)/2;
        }
        return (int)start;
    }
};