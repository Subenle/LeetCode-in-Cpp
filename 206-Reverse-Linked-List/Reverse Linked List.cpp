Enter file contents here
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*ATTENTION   Time Limit Exceeded
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        stack<ListNode*> snode;
        ListNode* tmp;
        while(head!=NULL){
            snode.push(head);
            head=head->next;
        }
        tmp=snode.top();
        while(!snode.empty()){
            tmp->next=snode.top();
            snode.pop();
        }
        return tmp;
    }
};
