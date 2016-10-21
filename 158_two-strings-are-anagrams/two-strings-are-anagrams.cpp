/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/two-strings-are-anagrams
@Language: C++
@Datetime: 16-06-07 15:37
*/

#include <string.h>
class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
        if(s.size() != t.size()){
            return false;
        }
       else {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            }
            return s==t;
        
    }
};