/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/space-replacement
@Language: Java
@Datetime: 16-03-04 04:26
*/

import java.util.ArrayList;
public class Solution {
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    public int replaceBlank(char[] string, int length) {
        // Write your code here
        ArrayList<Character> temp = new ArrayList<Character>();
        for (int i = 0; i < length; i++){
            if(string[i] != ' '){
                temp.add(string[i]);
            }
            else {
                temp.add('%');
                temp.add('2');
                temp.add('0');
            }
        }
        for(int i = 0; i < temp.size(); i++){
            string[i] = temp.get(i);
        }
        return temp.size();
    }
}