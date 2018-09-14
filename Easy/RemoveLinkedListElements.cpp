/*Remove all elements from a linked list of integers that have value val.*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return NULL;
        ListNode *temp = new ListNode(0);
        temp->next = head;
        ListNode *pre = temp;
        while(pre->next){
            if(pre->next->val == val){
                pre->next = pre->next->next;
            }
            else
                pre = pre->next;
        }
        return temp->next;
    }
};
