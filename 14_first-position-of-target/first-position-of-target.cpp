/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/first-position-of-target
@Language: C++
@Datetime: 16-08-18 09:15
*/

class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        int length = array.size();
        int start = 0;
        int end = length - 1;
        int mid = start + (end - start)/2;
        int res = -1;
        
        while(start < end){
            {
                if(array.at(mid) < target){
                start++;
            }
            else if(array.at(mid) >= target){
                end = mid;
            }
            }
            {
                if(array.at(mid) == target){
                    res = 0;
                }
            }
            mid = start + (end - start)/2;
        }
        if(array.at(length - 1) == target){
            res = length - 1;
        }
        if(res == 0){
            res = start;
        }
        return res;
    }
};