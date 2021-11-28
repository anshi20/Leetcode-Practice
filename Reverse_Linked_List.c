/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){

    struct ListNode* prevnode= NULL;
    struct ListNode* nextnode= NULL;
    while(head!=NULL)
    {
        nextnode = head->next;
        head->next=prevnode;
        prevnode=head;
        head=nextnode;    
    }
    head = prevnode;
    return head;
}
