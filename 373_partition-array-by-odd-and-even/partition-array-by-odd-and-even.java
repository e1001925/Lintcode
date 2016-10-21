/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/partition-array-by-odd-and-even
@Language: Java
@Datetime: 16-03-06 10:53
*/

public class Solution {
    /**
     * @param nums: an array of integers
     * @return: nothing
     */
    public void partitionArray(int[] nums) {
        // write your code here;
        int pointer1 = 0;
        int pointer2 = 0;
        int j = 1;
        int i = 0;
        if(nums.length>1){
        while(i < nums.length-j){
            if(nums[i]%2==0){
                pointer1 = nums[i];
                while(nums.length-j!=i && nums[nums.length-j]%2==0){//find odd, else move on
                    j++;
                }
                if(nums[nums.length-j]%2!=0){ //find odd at last
                    nums[i] = nums[nums.length-j];//odd in front
                    nums[nums.length-j] = pointer1; //reverse
                }
            }
            i++;
        }}
    }
}