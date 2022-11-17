class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *ptr = head; // using single pointer
        while (ptr->next)
        {
            if (ptr->val == ptr->next->val)
            {
                ptr->next = ptr->next->next;
            }
            else
            {
                ptr = ptr->next;
            }
        }

        return head;
    }
};
