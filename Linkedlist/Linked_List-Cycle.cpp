class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
            return head;

        ListNode *fast, *slow;
        fast = slow = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};