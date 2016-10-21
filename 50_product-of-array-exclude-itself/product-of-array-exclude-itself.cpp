/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/product-of-array-exclude-itself
@Language: C++
@Datetime: 16-07-21 09:41
*/

class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        int size = nums.size();
        int i = 0;
        int j;
        long long res = 1;
        vector<long long> myvec;
        for (i=0; i<size; i++){
            for (j=0; j<size; j++){
                if(j != i){
                    res = nums.at(j)*res;
                }
            }
            myvec.push_back(res);
            res = 1;
        }
        return myvec;
    }
};