/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/search-insert-position
@Language: C++
@Datetime: 16-08-17 03:10
*/

class Solution {
    /** 
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        int length = A.size();
        if(length == 0){return 0;}
        int start = 0;
        int end = length;
        int mid = start + (end - start)/2;
        
        while(start < end){
            if(A.at(mid) < target){
                start ++;
            }
            else if(A.at(mid) > target){
                end = mid;
            }
            else if(A.at(mid) == target){
                return mid;
            }
            mid = start + (end - start)/2;
        }
        return start;
    }
};