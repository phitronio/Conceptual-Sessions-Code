class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        for(ListNode* tempA=headA; tempA!=NULL; tempA = tempA->next)
        {
            for(ListNode* tempB=headB; tempB!=NULL; tempB = tempB->next)
            {
                if(tempA == tempB)
                    return tempA;
            }
        }
        return NULL;
    }
};