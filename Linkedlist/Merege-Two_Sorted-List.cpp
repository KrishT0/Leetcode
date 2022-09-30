class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == NULL && list2)
            return list2;
        else if (list1 && list2 == NULL)
            return list1;
        else if (list1 == NULL && list2 == NULL)
            return list1;

        ListNode *head, *temp;

        if (list1->val < list2->val)
        {
            head = temp = list1;
            list1 = list1->next;
            head->next = NULL;
        }
        else
        {
            head = temp = list2;
            list2 = list2->next;
            head->next = NULL;
        }

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
                temp->next = NULL;
            }
            else
            {
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
                temp->next = NULL;
            }
        }
        if (list1)
            temp->next = list1;
        if (list2)
            temp->next = list2;

        return head;
    }
};