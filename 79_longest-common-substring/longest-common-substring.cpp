/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/longest-common-substring
@Language: C++
@Datetime: 16-06-11 15:57
*/

class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        int k = 0;
	    int** dp = new int*[A.size()+100];
    for (k = 0; k < A.size()+100; k++) {
		dp[k] = new int[B.size()+100];
	}
        int i,j;
        int max = 0;
        //if(A.at(0) == B.at(0)){dp[0][0]-
        for(i=0; i<A.length();i++){
            for(j=0; j<B.length();j++){
                if(A[i] == B[j]){
                    if(i==0 || j==0){
                        dp[i][j] = 1;
                    }
                    else {
                        dp[i][j] = dp[i-1][j-1]+1;
                    }
                    if(dp[i][j] > max){
                            max = dp[i][j];
                        }
                }
            }
        }
        return max;
    }
};
