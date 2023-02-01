class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        if (node->next->next)
            node->next = node->next->next;
        else
            node->next = NULL;
    }
};