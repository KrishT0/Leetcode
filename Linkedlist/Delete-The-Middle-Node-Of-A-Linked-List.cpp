class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL)
            return NULL;

        if (head->next == NULL) // for 1 node
        {
            delete head;
            return NULL;
        }

        ListNode *fast = head, *slow = head, *prev;
        while (fast && fast->next) // reach middle node
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        prev->next = slow->next;
        delete slow;

        return head;
    }
};