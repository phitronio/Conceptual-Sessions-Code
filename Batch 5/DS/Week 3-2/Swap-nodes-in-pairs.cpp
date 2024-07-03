class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* temp1 = head;
        ListNode* temp2 = head->next;

        while(temp1!=NULL && temp2!=NULL)
        {
            swap(temp1->val, temp2->val);
            temp1 = temp1->next->next;
            if(temp1==NULL)
                break;
            temp2 = temp2->next->next;   // temp2 = NULL
        }
        
        return head;
    }
};