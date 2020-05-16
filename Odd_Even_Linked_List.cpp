/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) 
            return head;
        ListNode* ptr=head;
        ListNode* ptr1=head->next;
        ListNode* ptr2=ptr1;
        while(ptr1 && ptr1->next)
        {
            ptr->next=ptr1->next;
            
            ptr=ptr->next;
            ptr1->next=ptr->next;
            ptr1=ptr1->next;
        }
        ptr->next=ptr2;
        return head;
    }
};
