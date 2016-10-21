/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/merge-two-sorted-lists
@Language: Java
@Datetime: 16-03-07 17:20
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
     * @param ListNode l1 is the head of the linked list
     * @param ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        // write your code here
         ListNode l = new ListNode(Integer.MIN_VALUE);
         ListNode p1 = l1, p2 = l2, p3 = l;
        while(p1 != null && p2 != null) {
            if(p1.val < p2.val) {
                p3.next = p1;
                p1 = p1.next;
            }else if (p1.val > p2.val) {
                p3.next = p2;
                p2 = p2.next;
            }else {
                p3.next = p1;
                p1 = p1.next;
                p3 = p3.next;
                p3.next = p2;
                p2 = p2.next;
            }
            p3 = p3.next;
        }
        p3.next = (null == p1 ? p2 : p1);
        return l.next;
        }
}