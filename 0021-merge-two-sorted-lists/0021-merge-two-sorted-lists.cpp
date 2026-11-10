class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // Dummy node to avoid handling head separately
        ListNode* dummyNode = new ListNode(-1);

        // Tail pointer of the merged list
        ListNode* temp = dummyNode;

        // Traverse both lists until one becomes NULL
        while(list1 != nullptr && list2 != nullptr) {

            // If current node of list1 is smaller
            if(list1->val <= list2->val) {
                // Attach list1 node to merged list
                temp->next = list1;

                // Move list1 forward
                list1 = list1->next;
            }
            else {

                // Attach list2 node to merged list
                temp->next = list2;

                // Move list2 forward
                list2 = list2->next; 
            }

            // Move tail of merged list forward
            temp = temp->next;
        }

        // Attach remaining nodes of whichever list is left
        if(list1 != nullptr) {
            temp->next = list1;
        }
        else {
            temp->next = list2;
        }

        // Return actual head (skip dummy node)
        return dummyNode->next;
    }
};