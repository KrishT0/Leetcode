class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *prev = NULL;
        ListNode *front = head->next;

        while (head)
        {
            head->next = prev;
            prev = head;
            head = front;
            if (front->next == NULL)
            {
                head->next = prev;
                return head;
            }
            else
                front = front->next;
        }
        return head;
    }
};