/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/first-bad-version
@Language: C++
@Datetime: 16-10-04 09:16
*/

/**
 * class SVNRepo {
 *     public:
 *     static bool isBadVersion(int k);
 * }
 * you can use SVNRepo::isBadVersion(k) to judge whether 
 * the kth code version is bad or not.
*/
class Solution {
public:
    /**
     * @param n: An integers.
     * @return: An integer which is the first bad version.
     */
    int findFirstBadVersion(int n) {
        // write your code here
        int mid = n/2;
        int res = n;
        int bot = 1;
        while(res > bot ){
            if(SVNRepo::isBadVersion(mid) == false){
                bot = mid + 1;
            }
            else{
                res = mid;
            }
            mid = (res - bot)/2 + bot ;
        }
        return res;
    }
};
