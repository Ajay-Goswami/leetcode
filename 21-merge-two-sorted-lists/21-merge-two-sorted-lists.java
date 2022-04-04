/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1 == null && list2 == null)
            return list1;
        if(list1 != null && list2 == null)
            return list1;
        if(list1 == null && list2 != null)
            return list2;
        ListNode head = null ;
        ListNode p1 = list1, p2 = list2;
        ListNode ptr=head;
        
        while(p1 != null && p2 != null)
        {
            if(p1.val <= p2.val)
            {
                if(head == null)
                {
                    head = p1;
                    ptr = head;
                    p1 = p1.next;
                }
                else
                {
                    ptr.next = p1;
                    ptr = p1;
                    p1 = p1.next;
                }
            }
            else if(p1.val > p2.val)
            {
                if(head == null)
                {
                    head = p2;
                    ptr = head;
                    p2 = p2.next;
                }
                else
                {
                    ptr.next = p2;
                    ptr = p2;
                    p2 = p2.next;
                }
            }
        }
        if(p1 == null)
            ptr.next = p2;
        if(p2 == null)
            ptr.next = p1;
        return head;
    }
}