/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/delete-node-in-the-middle-of-singly-linked-list
@Language: Java
@Datetime: 16-03-06 16:56
*/

/**
 * Definition for ListNode.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int val) {
 *         this.val = val;
 *         this.next = null;
 *     }
 * }
 */ 
public class Solution {
    /**
     * @param node: the node in the list should be deleted
     * @return: nothing
     */
    public void deleteNode(ListNode node) {
  /*   //ListNode nodenext = node.next;
     if(node == null || node.next == null) return; //nothing to delete
    if(node.next == null){
       node = null;
       return;
    } else{
       node = null;
    }*/
      if(node==null)
            return;
        node.val = node.next.val;
        node.next = node.next.next;
    }
}