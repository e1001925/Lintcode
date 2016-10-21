/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/search-a-2d-matrix-ii
@Language: Java
@Datetime: 16-03-05 17:29
*/

public class Solution {
    /**
     * @param matrix: A list of lists of integers
     * @param: A number you want to search in the matrix
     * @return: An integer indicate the occurrence of target in the given matrix
     */
    public int searchMatrix(int[][] matrix, int target) {
        // write your code here
        int j=0;
        int i=0;
        int count=0;
        while(j<matrix.length){
            if(matrix[j][i]<=target){
                if (matrix[j][i]==target){
                    count++;
                }
                i++;
                if(i==matrix[j].length){
                    j++;
                    i=0;
                }
            }
            else if (matrix[j][i]>target){
                j++;
                i=0;
            }
        }
        return count;
    }
}
