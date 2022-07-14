//https://leetcode.com/problems/add-two-numbers/submissions/
/*
	You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/
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
    ListNode list = null;
    ListNode tail = list;
    
    int[] add(int x, int y, int carry) {
        int[] arr = new int[2];
        int sum = x + y + carry;
        
        arr[0] = sum % 10;
        arr[1] = sum / 10;
        
        return arr;
    }
    
    void add(ListNode l1, ListNode l2, int carry) {
        if(l1 == null && l2 == null && carry == 0)
            return;
        
        // These are three arguments to be added
        int first = 0, second = 0, third = carry;
        if(l1 != null)
            first = l1.val;
        if(l2 != null)
            second = l2.val;
        
        // Creating new node with the sum of three parameters
        int[] arr = add(first, second, third);        
        ListNode newNode = new ListNode(arr[0]);
        
        
        // add the new node to the already existing list        
        if(list == null){
            list = newNode;
            tail = list;
        }
        else {
            tail.next = newNode;
            tail = tail.next;
        }
        
        ListNode firstNode = null, secondNode = null;
        if(l1 != null)
            firstNode = l1.next;
        if(l2 != null)
            secondNode = l2.next;
        
        add(firstNode, secondNode, arr[1]);
    }
    
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if(l1 != null && l2 != null)
            add(l1, l2, 0);
        return list;
    }
}