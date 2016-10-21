/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/merge-sorted-array
@Language: C++
@Datetime: 16-07-21 08:25
*/

class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int a = m-1;
        int b = n-1;
        int i = 0;
        if(n != 0){
            for(i = 1; i < m + n + 1; i++){
                if(B[b] >= A[a]){
                    A[m + n - i] = B[b];
                    b--;
                }
                else {
                    A[m + n - i] = A[a];
                    a--;
                }
            }
            
        }
    }
};