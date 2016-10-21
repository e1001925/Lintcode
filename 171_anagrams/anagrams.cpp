/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/anagrams
@Language: C++
@Datetime: 16-06-10 16:48
*/

class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        map<string, int> sort_map;
        vector<string> res;
        vector<string> ret;  
      //  int index = 0;
        for (string s: strs){
            string temp = s;
            sort(s.begin(), s.end());
            if(sort_map[s] == 0){
                sort_map[s]++;
                res.push_back (temp);
                //index++;
            }
            else if(sort_map[s] == 1){
               // int i = 0;
               // if(index >= 1){
               
                    for(string aa: res){
                        string temp2 = aa;
                        sort(temp2.begin(), temp2.end());
                        if(s == temp2){
                         ret.push_back(aa);
                //     }
                    }   
                  }
                sort_map[s]++;
                ret.push_back(temp);
            }
            else{
               // sort_map[s]++;
                ret.push_back(temp);
            }
        }
        return ret;
    }
};
