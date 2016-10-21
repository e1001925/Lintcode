/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/remove-element
@Language: C++
@Datetime: 16-06-12 14:51
*/

class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        //int i;
        A.erase(remove(A.begin(), A.end(), elem), A.end());
        return A.size();
    }
};