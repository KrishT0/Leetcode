class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast, *slow;
        fast = slow = head;

        while (fast && fast->next)
        {
            // for odd number of nodes
            if (fast->next->next == NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            // for even number of nodes
            else
            {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return slow;
    }
};