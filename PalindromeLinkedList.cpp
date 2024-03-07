/*Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

bool isPalindrome(struct ListNode* head) 
    {
    if(head==NULL || head->next==NULL){
        return true;
    }
    vector<int>o;

    struct ListNode *temp = head;

    while(temp!=NULL){
        o.push_back(temp->val);
        temp=temp->next;
    }
    
    int i=0;
    int j=o.size()-1;
    while(i<j){
        if(o[i]!=o[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}
    
};
