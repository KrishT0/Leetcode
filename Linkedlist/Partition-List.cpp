class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        if (head == NULL || head->next == NULL)
            return head;

        // Create 2 nodes for 2 new linkedlist :
        //  1. for low elemnts
        //  2. for higher or equal elemsts

        ListNode *low, *l, *high, *h;
        low = new ListNode;
        high = new ListNode;

        l = low; // initialize
        h = high;

        while (head)
        {
            if (head->val < x)
            {
                l->next = head;
                l = l->next;
                head = head->next;
                l->next = NULL;
            }
            else
            {
                h->next = head;
                h = h->next;
                head = head->next;
                h->next = NULL;
            }
        }
        l->next = high->next;

        return low->next;
    }
};

