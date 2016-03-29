Enter file contents here
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 使用递归
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* newhead = head;
        while(newhead->next != NULL)
            newhead = newhead->next;
        reverse(head);
        return newhead;
    }
    ListNode* reverse(ListNode* head)
    {
        if(head->next == NULL)
            return head;
        else
        {
            ListNode* tail = reverse(head->next);
            tail->next = head;
            tail = tail->next;
            tail->next = NULL;
            return tail;
        }
    }
};
