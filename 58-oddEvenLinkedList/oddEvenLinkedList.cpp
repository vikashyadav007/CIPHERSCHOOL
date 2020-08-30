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
    ListNode* oddEvenList(ListNode* head) {
        ListNode odd;
        ListNode even;
        ListNode *ptr = &odd;
        ListNode *qtr = &even;
        ListNode *rtr = head;
        int index = 1;
        while(rtr != NULL){
           if(index==1){
                ptr->next = rtr;
                ptr=ptr->next;
                rtr=rtr->next;
               index=0;
           }else{
               qtr->next=rtr;
               qtr=qtr->next;
               rtr=rtr->next;
               index=1;
           }
        }
        qtr->next=NULL;
        ptr->next=even.next;
        return odd.next;
    }
};
