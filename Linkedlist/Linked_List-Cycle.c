bool hasCycle(struct ListNode *head)
{
    struct ListNode *fast, *slow;
    fast = slow = head;
    if (fast == NULL)
        return false;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
}