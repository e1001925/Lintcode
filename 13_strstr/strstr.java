/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/strstr
@Language: Java
@Datetime: 16-03-21 09:04
*/

class Solution {
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    public int strStr(String source, String target) {
        //write your code here
        if (source == null || target == null){
            if( source == null && target != null){
                return -1;
            }
            else if ( source != null && target == null){
                return -1;
            }
            else {return -1;}
        }
        if (source.equals("") || target.equals("")){
            if( source.equals("") &&(!target.equals(""))){
               return -1;
            }            
            else {
                return 0;
            }
        }
        char pointerS = source.charAt(0);
        char pointerT = target.charAt(0);
        int tIndex = 0;
        int sIndex = 0;
        int cur_index = 0;
        while(sIndex < source.length()){
            pointerS = source.charAt(sIndex);
            cur_index = sIndex;
            if(pointerS == pointerT){
                while(pointerS == pointerT){
                     tIndex++;
                     if(tIndex >= target.length()){return sIndex;}
                     cur_index++;
                     if(cur_index == source.length()){return -1;}
                     pointerS = source.charAt(cur_index);
                     pointerT = target.charAt(tIndex);
                }
                    tIndex = 0; 
                    pointerT = target.charAt(tIndex);
                    pointerS = source.charAt(sIndex);
            }
            sIndex++;
        }
            return -1;
    }
}