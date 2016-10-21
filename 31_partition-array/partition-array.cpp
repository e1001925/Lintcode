/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/partition-array
@Language: C++
@Datetime: 16-08-16 10:00
*/

class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        // write your code here

        int left = 0;
        int length = nums.size();
        int right = length -1;
        int temp = 0;
        while(left < right){
            while(left <= right && nums.at(left) < k){left ++;}
            while(left <= right && nums.at(right) >= k){right --;}
            if(left <= right){
                temp = nums.at(left);
                nums.at(left) = nums.at(right);
                nums.at(right) = temp;
                left ++;
                right --;
            }
        }
        return left;
    }
};