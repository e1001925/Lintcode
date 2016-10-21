/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/compare-strings
@Language: Java
@Datetime: 16-03-17 02:51
*/

import java.util.HashMap;

public class Solution {
    /**
     * @param A : A string includes Upper Case letters
     * @param B : A string includes Upper Case letter
     * @return :  if string A contains all of the characters in B return true else return false
     */
    public boolean compareStrings(String A, String B) {
        // write your code here
        //int[] ascii = new int[255];
        if(B == null){return true;}
        if(A.length() < B.length()){
            return false;
        }
      HashMap<Character, Integer> ascii = new HashMap<Character, Integer>();
      for(int i=0; i<A.length(); i++){
          if(ascii.get(A.charAt(i))!=null){
              ascii.put(A.charAt(i),ascii.get(A.charAt(i))+1);
          }
          else {
              ascii.put(A.charAt(i), 1);
          }
      }
      for(int i=0; i<B.length(); i++){
          if(ascii.get(B.charAt(i))!=null && ascii.get(B.charAt(i)) > 0){
              ascii.put(B.charAt(i),ascii.get(B.charAt(i))-1);
          }
          else {
              return false;
          }
      }
        return true;
    }
}