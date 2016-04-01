class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* temp = head->next->next;
        ListNode* node = head;
        head = head->next;
        head->next = node;
        node->next = swapPairs(temp);
        return head;
    }
};
