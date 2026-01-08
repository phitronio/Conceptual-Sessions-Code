/*
________________________
|                      |
|     AB Atiq          |
|______________________|
*/

// Problem link: https://leetcode.com/problems/swap-nodes-in-pairs/description/

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
            return head; // Return if the list has 0 or 1 nodes.

        ListNode *newHead = head->next; // The second node will become the new head
        ListNode *prev = nullptr;       // Tracks the node before the current pair
        ListNode *curr = head;          // Points to the first node in the current pair

        while (curr && curr->next)
        {
            ListNode *first = curr;        // First node in the pair
            ListNode *second = curr->next; // Second node in the pair

            // Perform the swap
            first->next = second->next; // Point the first node to the node after the second
            second->next = first;       // Point the second node to the first

            if (prev)
                prev->next = second; // Connect the previous pair to the current pair. If prev is not nullptr, connect the end of the previous pair to the start of the current pair

            // Move pointers forward
            prev = first;       // Update previous to the first node
            curr = first->next; // Move current to the next pair
        }

        return newHead; // Return the new head of the list
    }
};