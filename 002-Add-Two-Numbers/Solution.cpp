/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result, *ptr1, *ptr2, *result_ptr;
        int carry = 0;
        result = new ListNode(0);
        result_ptr = result;
        ptr1 = l1;
        ptr2 = l2;
        while(ptr1 && ptr2) {
            int val = ptr1->val + ptr2->val + carry;
            carry = val > 9 ? 1 : 0;
            result_ptr->next = new ListNode(val % 10);
            result_ptr = result_ptr->next;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1 ? ptr1 : ptr2;
        while(ptr1) {
            int val = ptr1->val + carry;
            carry = val > 9 ? 1 : 0;
            result_ptr->next = new ListNode(val % 10);
            result_ptr = result_ptr->next;
            ptr1 = ptr1->next;
        }
        if(carry) {
            result_ptr->next = new ListNode(carry);
            result_ptr = result_ptr->next;
        }
        ptr1 = result;
        delete ptr1;
        result = result->next;
        return result;
    }
};
