/*Given a singly linked list, determine if it is a palindrome. */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return true;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        while(slow != NULL)
        {
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
    
    ListNode * reverse(ListNode * head)
    {
        ListNode * pre = NULL;
        ListNode * next = NULL;
        while(head != NULL)
        {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
};
