/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/search-in-rotated-sorted-array
@Language: C++
@Datetime: 16-10-10 03:16
*/

class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
        int length = A.size();
        if(length == 1){
            if(A.at(0) == target){
                return 0;
            }
            else {return -1;}
        }
        else if(length == 0) {
            return -1;
        }
        
        int right = length - 1;
        int left = 0;
        int mid = 0;
        
        if(length == 0){
            if(A.at(0) == target){
                return 0;
            }
            else return -1;
        }
        
        while(right > left){
          mid = (left + right)/2;
          if(target == A.at(mid)){
                return mid;
          }
          else if(target == A.at(left)){
                return left;
          }
           else if(target == A.at(right)){
                return right;
          }
          if (A.at(mid) >= A.at(left)){
              if(target < A.at(mid) && target > A.at(left)){
                  right = mid - 1;
              }
              else {
                  left = mid + 1;
              }
          }
          else {
              if(target > A.at(mid) && target < A.at(right)){
                  left = mid + 1;
              }
              else {
                  right = mid - 1;
              }
          }
        }
        return -1;
    }
};