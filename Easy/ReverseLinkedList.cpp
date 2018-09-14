/* Reverse a singly linked list. */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * pre = NULL;
        ListNode * next = NULL;
        while(head!=NULL)
        {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
        
    }
};
