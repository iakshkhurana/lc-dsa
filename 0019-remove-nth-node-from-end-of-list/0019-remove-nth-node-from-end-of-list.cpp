class Solution {
public:
    int sizer(ListNode* head){
        ListNode* curr=head;
        int size=0;
        while(curr!=nullptr){
            curr=curr->next;
            size+=1;
        }
        return size;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int rempos=sizer(head)-n+1;  
        ListNode* dummyNode=new ListNode(-1); 
        dummyNode->next=head;         
        ListNode* temp=dummyNode;
        for(int i=1;i<rempos;i++){             // rempos-1 tak chalo
            temp=temp->next;
        }
        temp->next=temp->next->next;           // rempos wala node skip
        return dummyNode->next;
    }
};