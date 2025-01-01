
//problem link: https://leetcode.com/problems/swap-nodes-in-pairs/description/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* newHead = head->next;
        ListNode* cur = head;
        ListNode* prev = NULL;

        while(cur !=NULL && cur->next != NULL){
            ListNode* nxt = cur->next;
            cur->next = nxt->next;
            nxt->next = cur;

            if(prev !=NULL){
                prev->next = nxt;
            }
            prev = cur;
            cur = cur->next;
        }

        return newHead;
    }
};
