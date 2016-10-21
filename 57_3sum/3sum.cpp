/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/3sum
@Language: C++
@Datetime: 16-08-04 07:47
*/

class Solution {
public:    
    /**
     * @param numbers : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int> > threeSum(vector<int> &nums) {
        // write your code here
        sort(nums.begin(), nums.end());
        vector<vector<int> > resvec;
        int tempres = 0;
        int i;
        int start = 0;
        int size = nums.size() - 1;
        int end = size;
        for(i=0; i<size; i++){
            while (start < end){
                if(start == i){start++; continue;}
                else if(end == i){end--;  continue;}
                tempres = nums.at(i) + nums.at(start) + nums.at(end);
                if(tempres == 0){
                    int myarry[3] = {nums.at(i), nums.at(start), nums.at(end)};
                    sort(myarry, myarry+3);
                    vector<int> tempvec {myarry, myarry + 3};
                    //tempvec.insert(tempvec.end(), myarry.begin(), myarry.end());
                    if(find(resvec.begin(), resvec.end(), tempvec) == resvec.end()) {
                        resvec.push_back(tempvec);}
                    start ++;
                    //resvec.insert(resvec.end(), tempvec.begin(), tempvec.end());
                }
                else if(tempres > 0){
                    end--;
                }
                else if(tempres < 0){
                    start++;
                }
            }
            start = 0;
            end = size;
        }
        return resvec;
    }
};
