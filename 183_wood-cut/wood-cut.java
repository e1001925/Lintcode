/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/wood-cut
@Language: Java
@Datetime: 16-08-25 06:39
*/

public class Solution {
    public int woodCut(int[] L, int k) {
        int n = L.length;
        if (n == 0) return 0;
        Arrays.sort(L);
        int start = 1;
        int end = L[n-1];
        int res = 0;
        while (start <= end) {
            int mid = start + (end - start)/2;
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum+=L[i]/mid;
            }
            if (sum >= k) {
                res = mid;
                start = mid + 1;
            }
            else end = mid - 1;
        }
        return res;
    }
}