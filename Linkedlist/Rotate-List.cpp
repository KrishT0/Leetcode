class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        auto iter = head;
        auto len = 1;
        while (iter->next) // find list size
        {
            iter = iter->next;
            len++;
        }

        iter->next = head; // create a ring
        iter = head;

        for (int i = 0; i < len - (k % len) - 1; i++) // find one element before the new head
        {
            iter = iter->next;
        }
        head = iter->next;

        iter->next = NULL;
        return head;
    }
};