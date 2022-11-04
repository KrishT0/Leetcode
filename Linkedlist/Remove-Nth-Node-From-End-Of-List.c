struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    struct ListNode *fast, *slow;
    fast = slow = head;
    for (int i = 0; i < n; i++)
        fast = fast->next;

    if (!fast)
        return head->next; // if fast becomes null then, n must be at max. so 1st node should be deleted.

    fast = fast->next;
    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return head;
}