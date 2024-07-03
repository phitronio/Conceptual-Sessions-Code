class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next!=NULL)
        {
            int gcd = __gcd(temp->val, temp->next->val);
            ListNode* newnode = new ListNode(gcd);
            newnode->next = temp->next;
            temp->next = newnode;

            temp = temp->next->next;
        }
        return head;
    }
};