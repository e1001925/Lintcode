/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/search-for-a-range
@Language: C++
@Datetime: 16-10-10 10:36
*/

class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        vector<int> res;
        int length = A.size();
        if (length == 0){
                res.push_back(-1);
                res.push_back(-1);
                return res;
        }
        else if(length == 1){
            if(A.at(0) == target){
                res.push_back(0);
                res.push_back(0);
                return res;
            }
            else{
                res.push_back(-1);
                res.push_back(-1);
                return res;
            }
        }
        
        int right = length - 1;
        int left = 0;
        int mid = (left + right)/2;
        
        if(A.at(left) > target || A.at(right) < target){
                res.push_back(-1);
                res.push_back(-1);
                return res;
        }
        while(left <= right){
            if(target > A.at(mid) && target != A.at(left)){
                left = mid + 1;
            }
            else if(target < A.at(mid) && target != A.at(right)){
                right = mid - 1;
            }
            else {
                if(A.at(left) != target){
                    left++;
                }
                else if(A.at(right) != target){
                    right--;
                }
                else{
                    res.push_back(left);
                    res.push_back(right);
                    return res;
                }
            }
            mid = (left + right)/2;
        }
                res.push_back(-1);
                res.push_back(-1);
                return res;
    }
};