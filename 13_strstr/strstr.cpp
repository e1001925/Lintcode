/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/strstr
@Language: C++
@Datetime: 16-06-08 09:46
*/

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(source == NULL || target == NULL || strlen(source) < strlen(target)){
            return -1;
        }
        if(strlen(source) == 0 || strlen(target) == 0){
            return 0;
        }
        int i = 0;
        int j = 0; 
        for(i=0; i<strlen(source); i++){
            if(source[i] == target[j]){
                j++;
            }
            else{
                if(j!=0){
                    i--;
                }
                j=0;
            }
            if(j == strlen(target)){
                    return i-j+1;
                }
            }
        return -1;  
    }
};
