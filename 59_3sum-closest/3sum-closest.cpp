/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/3sum-closest
@Language: C++
@Datetime: 16-07-27 09:36
*/

class Solution {
public:    
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> nums, int target) {
        // write your code here
        sort(nums.begin(), nums.end());
        int i;
        int temp = 0;
        int res = INT_MAX;
        for (i=0; i<nums.size(); i++){
            int start = 0;
            int end = nums.size() - 1;
            while (start < end){
                if(start == i){
                    start ++;
                    continue;
                }
                else if(end == i){
                    end --;
                    continue;
                }
                temp = nums.at(start) + nums.at(end) + nums.at(i) - target;
                if(abs(temp) < abs(res)){
                    res = temp;
                }
                if (temp < 0){
                    start ++;
                }
                else if (temp > 0) {
                    end --;
                }
                else if (temp == 0){
                    return res + target;
                }
            }
        }
        return res + target;
    }
};
