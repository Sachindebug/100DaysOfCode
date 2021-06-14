 ListNode* reverseList(ListNode* head) {
        ListNode *prev,*curr,*nextt;
        prev=NULL;
        curr=head;
        while(curr!=NULL)
        {
            nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        return prev;
    
        
    }
