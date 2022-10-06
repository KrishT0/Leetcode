class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;
        // intialize
        ListNode *dummy, *prev, *link;
        dummy = new ListNode;
        link = dummy;

        // for first 2 nodes
        prev = head;
        head = head->next;
        prev->next = head->next;
        head->next = prev;
        link->next = head;

        // for rest nodes
        while (prev->next)
        {
            if (prev->next->next == NULL) // odd number of nodes
                return dummy->next;
            else
            {
                link = prev;
                prev = prev->next; // intialize
                head = prev->next;

                prev->next = head->next; // swap
                head->next = prev;
                link->next = head;
            }
        }

        return dummy->next;
    }
};