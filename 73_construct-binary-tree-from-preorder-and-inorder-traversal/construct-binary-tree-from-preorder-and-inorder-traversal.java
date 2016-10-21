/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/construct-binary-tree-from-preorder-and-inorder-traversal
@Language: Java
@Datetime: 16-03-06 08:44
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
     *@param preorder : A list of integers that preorder traversal of a tree 
     *@param inorder : A list of integers that inorder traversal of a tree 
     *@return : Root of a tree 
     */  
    public TreeNode buildTree(int[] preorder, int[] inorder) {  
        // write your code here  
    if(null==preorder||null==inorder||0==preorder.length||0==inorder.length) return null;  
          if (1 == inorder.length)  return new TreeNode(inorder[0]);  
         int root = preorder[0];  
         TreeNode res = new TreeNode(root);  
         int left = 0;  
         while(inorder[left]!=root){  
              left++;  
         }          
         res.left = buildTree(getArray(preorder, 1, left), getArray(inorder, 0, left-1));  
         res.right = buildTree(getArray(preorder, left+1, preorder.length-1), getArray(inorder, left+1, inorder.length-1));  
         return res;  
    }  
  
     public int[] getArray(int[] ora, int s, int e) {  
          int[] res = new int[e - s + 1];  
          int tmp = s;  
          for (int i = 0; i <= e - s; i++) {  
               res[i] = ora[tmp++];  
          }  
          return res;  
    }  
}  
