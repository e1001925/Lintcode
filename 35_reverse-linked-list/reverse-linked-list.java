/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/reverse-linked-list
@Language: Java
@Datetime: 16-03-05 08:21
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
     * @param head: The head of linked list.
     * @return: The new head of reversed linked list.
     */
    public ListNode reverse(ListNode head) {
        ListNode curr = head;
        ListNode prev = null;
        while(curr!=null){
            ListNode pNext = curr.next;
            if(curr.next == null){
                // 翻转后的头节点,后面是空，结果
                head = curr;
            }
            // p的下一个节点指向之前要链接的节点
            curr.next = prev;
            // 要链接的节点 直线p节点，以供下次链接
            prev = curr;
            // p节点更新，指向pNext
            curr = pNext;
        }
        return head;
    }
}
