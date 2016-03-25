/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    var carry = 0;
    var result = new ListNode(0);
    var ptr1 = l1;
    var ptr2 = l2;
    var val;
    var result_ptr = result;
    
    while(ptr1 && ptr2) {
        val = ptr1.val + ptr2.val + carry;
        carry = val > 9 ? 1 : 0;
        result_ptr.next = new ListNode(val % 10);
        result_ptr = result_ptr.next;
        ptr1 = ptr1.next;
        ptr2 = ptr2.next;
    }
    ptr1 = ptr1 ? ptr1 : ptr2;
    while(ptr1) {
        val = ptr1.val + carry;
        carry = val > 9 ? 1 : 0;
        result_ptr.next = new ListNode(val % 10);
        result_ptr = result_ptr.next;
        ptr1 = ptr1.next;
    }
    if(carry) {
        result_ptr.next = new ListNode(carry);
        result_ptr = result_ptr.next;
    }
    return result.next;
};
