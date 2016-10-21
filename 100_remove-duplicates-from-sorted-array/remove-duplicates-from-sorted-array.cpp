/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-array
@Language: C++
@Datetime: 16-07-21 06:58
*/

class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
       int counter = 0;
       int i = 1;
        while (i < nums.size()){
            while (i<nums.size() && (nums.at(i) == nums.at(i-1))) {
                counter++;
                i++;
            }
            if(i >= nums.size()){
                nums[i-counter] = nums[i-1];
            }
            while (i < nums.size() && (nums.at(i) != nums.at(i-1))) {
                nums.at(i-counter) = nums.at(i);
                i++;
            }
        }
        if(counter != 0){
            nums.erase(nums.begin()+(i-counter), nums.end());}
        return nums.size();
    }
};