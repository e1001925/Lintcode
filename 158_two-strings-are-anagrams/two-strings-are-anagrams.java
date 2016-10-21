/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/two-strings-are-anagrams
@Language: Java
@Datetime: 16-03-21 07:16
*/

public class Solution {
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    public boolean anagram(String s, String t) {
        // write your code here
        if (s == null || t == null){
            if (s == null && t == null){
                 return true; 
            }
            else{
                 return false;
            }
        }
        if (s.length() != t.length()){
            return false;
        }
        int[] ascii = new int[256];
        for (int i = 0; i < t.length(); i++){
            ascii[s.charAt(i)]++;
            ascii[t.charAt(i)]--;
        }
        for (int i = 0; i < 256; i++){
            if(ascii[i] != 0){
                return false;
            }
        }
        return true;
    }
}