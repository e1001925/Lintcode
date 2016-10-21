/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/search-a-2d-matrix
@Language: C++
@Datetime: 16-08-18 03:52
*/

class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        int y = matrix.size();
        if(y == 0){
            return false;
        }
        int x = matrix.at(0).size();
        if(x == 0){
            return false;
        }
        int start = 0;
        int end = y - 1;
        int mid = start + (end - start)/2;
        //int start = matrix.at(0).at(x-1));
        //int end = matrix.at(y-1).at(x-1);
        
        while(start < end){
            if(matrix.at(mid).at(x-1) > target){
                end = mid;
            }
            else if (matrix.at(mid).at(x-1) < target){
                start ++;
            }
            else {
                return true;
            }
            mid = start + (end - start)/2;
        }
        int targetrow = start;
        start = 0;
        end = x - 1;
        mid = start + (end - start)/2;
        while(start < end){
            if (matrix.at(targetrow).at(mid) > target){
                end = mid;
            }
            else if (matrix.at(targetrow).at(mid) < target){
                start ++;
            }
            else {
                return true;
            }
            mid = start + (end - start)/2;
        }
        if(matrix.at(targetrow).at(end) == target){return true;}
        
        return false;
    }
};
