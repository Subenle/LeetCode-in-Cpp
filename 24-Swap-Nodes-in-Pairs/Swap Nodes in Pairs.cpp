class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* pre,*reh;
        pre->next = head;
        reh = head->next;
        while(head!=NULL && head->next != NULL){
            pre->next = head->next;
            head->next = head->next->next;
            pre->next->next = head;
            pre = head;
            head = head->next;
        }
        return reh;
    }
};
