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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
             return head;
         ListNode* oddHead = head;
         ListNode* evenHead = head->next;
         ListNode* oddCur = oddHead;
         ListNode* evenCur = evenHead;
         while(evenCur != NULL && evenCur->next != NULL){
            oddCur->next = evenCur->next;
            evenCur->next = evenCur->next->next;
            oddCur = oddCur->next;
            evenCur = evenCur->next;
         }
         oddCur->next = evenHead;
         return oddHead;

    }
};
