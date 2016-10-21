/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/subarray-sum
@Language: C++
@Datetime: 16-06-12 15:39
*/

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        // write your code here
        int res = 0;
        int i = 0;
        int start = 0;
        int end = 0;
        int flag = 1;
        while (start < nums.size() && flag){
            while (i < nums.size()){
                res += nums[i];
                if (res == 0){
                    end = i;
                    flag = 0;
                    break;
                }else{
                    i++;
                }
            }
            if(flag == 1){
                res = 0;
                start++;
                i = start;
            }
        }
        vector<int> ret;
        ret.push_back(start);
        ret.push_back(end);
        return ret;
    }
};