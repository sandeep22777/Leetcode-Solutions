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
     
            if(l1 == NULL) return l2;
            if(l2 == NULL ) return l1;
            
            ListNode* dummyans = new ListNode();
            ListNode* dummy = dummyans;
            
            
            while(l1 != NULL && l2 != NULL)
            {
                    
                    if(l1->val<=l2->val)
                    {
                            dummy->next = l1;
                            l1 = l1->next;
                            dummy = dummy->next;
                    }
                    else
                    {
                             dummy->next = l2;
                            l2 = l2->next; 
                             dummy = dummy->next;
                    }
                    
            }
            
            
            if(l1 == NULL)
            {
                  dummy->next = l2;  
            }
            else
            {
                    dummy->next = l1;
            }
            
            return dummyans->next;
            
    }
};