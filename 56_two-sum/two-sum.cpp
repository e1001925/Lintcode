/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/two-sum
@Language: C++
@Datetime: 16-08-16 09:12
*/

class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        //sort(nums.begin(), nums.end());
        vector<int> resvec;
        map <int, int> mapping;
        int length = nums.size();
        int tosearch = 0;
        if(length < 2){return resvec;}
        for(int i=0; i<length; i++){
            mapping[nums.at(i)] = i;
        }
        for (int j=0; j<length; j++){
            tosearch = target - nums.at(j);
            if(mapping.find(tosearch) != mapping.end()){
                resvec.push_back(j + 1);
                resvec.push_back(mapping[tosearch] + 1);
                break;
            }
        }
        return resvec;
    }
};
