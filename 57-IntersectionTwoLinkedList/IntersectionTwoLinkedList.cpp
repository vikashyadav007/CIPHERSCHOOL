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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr = headA;
        ListNode *qtr = headB;
        int l1=0;
        int l2=0;
        while(ptr!=NULL){
            l1++;
            ptr=ptr->next;
        }
        
        while(qtr!=NULL){
            l2++;
            qtr=qtr->next;
        }
        int k=l2-l1;
        ptr=headA;
        qtr=headB;
        if(k<0){
            k=k*-1;
            while(k--){
                ptr=ptr->next;
            }
        }else{
            while(k--){
                qtr=qtr->next;
            }
        }
        while(ptr != qtr){
            ptr=ptr->next;
            qtr=qtr->next;
        }
        return ptr;
        
    }
};
