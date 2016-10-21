/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/first-missing-positive
@Language: C++
@Datetime: 16-07-22 09:05
*/

class Solution {
public:
    /**    
     * @param A: a vector of integers
     * @return: an integer
     */
    int firstMissingPositive(vector<int> A) {
        // write your code here
        // just SWAP this item to the position item.number, since every SWAP one item 
        // will surely be put on the correct position, then it is O(n). 
        int step = 0;
        int temp;
        int res = 1;
        for(step = 0; step < A.size(); step++){
            while(A.at(step) != step+1){
                if(A.at(step) <= 0 || A.at(step) > A.size()){
                    break;
                }
                if(A.at(A.at(step) - 1) == A.at(step)){
                    break;
                }
                temp = A.at(step);
                A.at(step) = A.at(temp-1);
                A.at(temp - 1) = temp;
            }
        }//swap down, here we go
       int i;
       for (i = 0; i < A.size(); i++){
           if(A.at(i) != i+1){
               res = i + 1;
               return res;
           }
       }
       res = A.size()+1;
       return res;
    }
};