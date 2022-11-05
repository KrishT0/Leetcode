class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *temp = node->next;  
        node->val = temp->val;   //just copy the value of next node of the given node which has to be deleted
        node->next = node->next->next;
        delete (temp);
    }
};