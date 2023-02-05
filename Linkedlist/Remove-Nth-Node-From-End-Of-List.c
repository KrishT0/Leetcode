class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *front, *back;
        front=back=head;
        
        while(n>0) 
        {
            front=front->next;
            n--;
        }
        
        if(!front) //if front is NULL then, we havr to delete head.
            return head->next;
        
        while(front->next)
        {
            front=front->next;
            back=back->next;
        }
        
        back->next=back->next->next;
        return head;
    }
};
