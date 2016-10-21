/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/compare-strings
@Language: C++
@Datetime: 16-06-07 15:56
*/

class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        if(A.size() < B.size()){
            return false;
        }
        if(B.size() == 0){
            return true;
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int i = 0;
        int j = 0;
        for(i=0; i<A.size(); i++){
            if(A.at(i) == B.at(j)){
                j++;
            }
            if(j == B.size()){
                return true;
            }
        }
        return false;
    }
};
