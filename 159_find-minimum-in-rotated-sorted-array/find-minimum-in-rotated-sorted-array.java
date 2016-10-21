/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/find-minimum-in-rotated-sorted-array
@Language: Java
@Datetime: 16-03-04 13:37
*/

public class Solution {
    /**
     * @param num: a rotated sorted array
     * @return: the minimum number in the array
     */
    public int findMin(int[] num) {
        // write your code here
     for(int i=1; i<num.length-1; i++){
         if(num[i]<num[i-1] && num[i]<num[i+1]){
             return num[i];
         }
         //else if(num[i]>num[i-1] && num[i]>num[i+1]){
           //  return num[0];
       //  }
     }   
     if(num[num.length-1]<num[num.length-2]){
         return num[num.length-1];
     }
     if(num[0]<num[1]){
         return num[0];
     }
     return 0;
    }
}