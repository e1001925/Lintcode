/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/subtree
@Language: Java
@Datetime: 16-03-07 17:45
*/

/**
 * Definition of TreeNode:
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left, right;
 *     public TreeNode(int val) {
 *         this.val = val;
 *         this.left = this.right = null;
 *     }
 * }
 */
public class Solution {
    /**
     * @param T1, T2: The roots of binary tree.
     * @return: True if T2 is a subtree of T1, or false.
     */
    public boolean isSubtree(TreeNode T1, TreeNode T2) {
        // write your code here
                if(T1==null && T2==null)
            return true;
        if(T1==null)
            return false;
        if(T2==null)
            return true;

        if(T1.val==T2.val){
            boolean res = isEqual(T1,T2);
            if(res)
                return true;
        }
        
        boolean lft = isSubtree(T1.left,T2);
        if(lft==true)
            return true;
        boolean rit = isSubtree(T1.right,T2);
        return rit;
    }
    public boolean isEqual(TreeNode T1,TreeNode T2){
        if(T1==null && T2==null)
            return true;
        if(T1==null)
            return false;
        if(T2==null)
            return false;
        if(T1.val==T2.val){
            boolean lft = isEqual(T1.left,T2.left);
            boolean rit = isEqual(T1.right,T2.right);
            if(lft && rit)
                return true;
        }
        return false;
    }
    
}