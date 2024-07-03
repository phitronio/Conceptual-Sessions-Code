class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* temp = head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    int getDecimalValue(ListNode* head) {
        int sz = size(head);
        int x = pow(2,sz-1);
        int ans = 0;
        for(ListNode* temp = head; temp!=NULL; temp=temp->next)
        {
            if(temp->val == 1)
            {
                ans+=x;
            }
            x/=2;
        }
        return ans;
    }
};