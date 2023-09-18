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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
       ListNode* list  = new ListNode();
       ListNode* point = list;
        
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                point->next = l1;
                point = point->next;
                l1= l1->next;
            }
            else {
                 point->next = l2;
                point = point->next;
                l2= l2->next;
            }
        }
        
        if(l1 == NULL) point->next = l2;
        if(l2 == NULL) point->next = l1;
        
        return list->next;
    }
};