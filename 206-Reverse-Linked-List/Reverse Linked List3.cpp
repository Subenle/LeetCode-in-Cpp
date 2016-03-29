Enter file contents here
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 不使用递归
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        else if(head->next->next == NULL)
        {
            ListNode* newhead = head->next;
            newhead->next = head;
            head->next = NULL;
            return newhead;
        }
        else
        {
            ListNode* pre = head;
            ListNode* cur = pre->next;
            pre->next = NULL;
            ListNode* post = cur->next;
            
            while(post != NULL)
            {
                cur->next = pre;
                pre = cur;
                cur = post;
                post = post->next;
            }
            cur->next = pre;
            return cur;
        }
    }
};
