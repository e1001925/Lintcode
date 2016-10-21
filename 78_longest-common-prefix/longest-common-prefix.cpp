/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/longest-common-prefix
@Language: C++
@Datetime: 16-06-12 10:30
*/

class Solution {
public:
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &strs) {
        // write your code here
        int i = 1;
        int index = 0;
        int length = 0;
        string res = "";
        int flag = 1;
        while (flag) {
            if (strs.size() == 0) {
                flag = 0;
            }else if (strs.size() == 1) {
                return strs.front();
            }
            for(i=1; i<strs.size(); i++){
                if (index < min(strs[i-1].length(), strs[i].length())) {
                    if (strs[i-1][index] != strs[i][index]) {
                        flag = 0;
                        break;
                    }
                }else{
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                res += strs[i-1][index];
            }
            index++;
        }
        return res;
    }
};