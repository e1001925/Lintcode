/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/string-permutation
@Language: Java
@Datetime: 16-03-08 08:01
*/

public class Solution {
    /**
     * @param A a string
     * @param B a string
     * @return a boolean
     */
    public boolean stringPermutation(String A, String B) {
        // Write your code here
        int length = A.length();
        if(length != B.length()){
            return false;
        }
        int[] temp = new int[256];
        for(int i = 0; i<length; i++){
            temp[A.charAt(i)]++;
            temp[B.charAt(i)]--;
        }
       for(int i = 0; i<length; i++){
           if(temp[i] != 0){
               return false;
           }
       }
       return true;
    }
}