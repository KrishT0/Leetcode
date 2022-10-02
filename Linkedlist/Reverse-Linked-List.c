struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *move, *prev;
    move = NULL;
    prev = NULL;
    while (head)
    {
        move = head->next;
        head->next = prev;
        prev = head;
        head = move;
    }
    head = prev;
    return head;
}