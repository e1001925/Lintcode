/*
@Copyright:LintCode
@Author:   michael18
@Problem:  http://www.lintcode.com/problem/remove-nth-node-from-end-of-list
@Language: Java
@Datetime: 16-03-07 15:07
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
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode removeNthFromEnd(ListNode head, int n) {
        // write your code here
        if(head == null){return null;}
        if(head.next == null && n>0){return null;}
        ListNode pointer1 = head;
        ListNode pointer2 = head;
        int i = n+1;
        while(i!=0){
            pointer2 = pointer2.next;
            if(pointer2 == null && i>1){return head.next;}
            i--;
        }
        if(pointer2 != null){
        while(pointer2 != null){
            pointer1 = pointer1.next;
            pointer2 = pointer2.next;
        }
        }
        //pointer1.val = pointer1.next.val;
        pointer1.next = pointer1.next.next;
        return head;
    }
}
