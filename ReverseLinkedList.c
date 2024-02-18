/*Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode* temp=head;
    struct ListNode* temp2=head;
   while(temp->next!=NULL){
       temp=temp->next;
   }
   struct ListNode *ptr=temp;

while(temp!=head){
    struct ListNode *prev = head;
    while(prev->next!=temp){
        prev=prev->next;
    }
    temp->next=prev;
    temp=prev;
}
temp->next=NULL;
return ptr;
}
