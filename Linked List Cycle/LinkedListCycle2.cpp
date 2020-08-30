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
     bool hasCycle(ListNode *head) {
         // if(head==NULL || head->next==NULL) return false;
        set<ListNode*> mySet;
         ListNode *temp=head;
         while(temp != NULL){
             if(mySet.count(temp)>0){
                 return true;
             }else{
                 mySet.insert(temp);
             }
             temp=temp->next;
         }
         return false;
     }
    
    
};
