class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (head == NULL || head->next == NULL)
            return head;
        if (left == right)
            return head;

        ListNode *tail, *cur, *prev, *front, *leftPrev, *dummy; // initialize
        int count = 1;

        dummy = new ListNode;
        tail = dummy;
        dummy->next = head;
        cur = head;

        for (int i = 0; i <= left; i++)
        {
            leftPrev = leftprev;
            cur = cur->next;
        }

        // while (count != left) // reaching to left
        // {
        //     tail = tail->next;
        //     cur = cur->next;
        //     count++;
        // }

        tail->next = NULL;
        stay = cur;
        prev = NULL;
        front = cur->next;

        for (; count != right + 1; count++)
        {
            cur->next = prev;
            prev = cur;
            cur = front;
            if (front->next)
                front = front->next;
        }
        tail->next = prev;
        stay->next = cur;

        return head;
    }
};