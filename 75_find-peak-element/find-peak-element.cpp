/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/find-peak-element
@Language: C++
@Datetime: 16-10-04 08:28
*/

class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        int mid = A.size()/2;
        int res = 0;
        int check_point = 0;
        while(!res){
            if(mid > 0 && mid < A.size()-1){
            if((A.at(mid) > A.at(mid - 1)) && (A.at(mid) > A.at(mid + 1))){
                res = mid;
                break;
            }
            else if(A.at(mid) <= A.at(mid - 1) && (A.at(mid) > A.at(mid + 1))){
                mid = mid/2;;
            }
            else if(A.at(mid) > A.at(mid - 1)  && (A.at(mid) <= A.at(mid + 1))){
                mid = mid + 1;
            }
            else if(A.at(mid) <= A.at(mid - 1)  && (A.at(mid) <= A.at(mid + 1))){
                check_point = mid;
                mid = mid + 1;
            }
            continue;
        }
            if (check_point != 0){
                mid = mid/2;
                check_point = 0;
            }
            else{
                res = 1;
            }
        }
        return res;
    }
};
