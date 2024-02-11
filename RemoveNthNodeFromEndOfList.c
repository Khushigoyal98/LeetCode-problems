/*Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
     if(head==NULL || head->next==NULL){
            return NULL;
        }
        int count=0;
        struct ListNode *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int position=count-n;  //0

        if(position==0){
            head=head->next;
            return head;
        }

        temp=head;
        for(int i=0;i<position-1;i++){
            temp=temp->next;
        }

        struct ListNode *del=temp->next;
        temp->next=del->next;
        free(del);
        return head;
}
