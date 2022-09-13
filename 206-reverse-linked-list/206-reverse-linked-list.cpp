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
        
     void reverse(ListNode* &pre,ListNode* &further,ListNode* &current)
     {
             if(further  == NULL ) return;
             current->next  = pre;
              pre= current;
             current = further;
            
             further = further->next;
             reverse(pre,further,current);
     }
        
    ListNode* reverseList(ListNode* head) {
           
            if(!head) return NULL;
            
            ListNode* prev = NULL;
            ListNode* further  = head->next;
            ListNode* current = head;
             
             reverse(prev,further,current);
             
             
//             while(further!= NULL)
//             {
                    
//                     current->next  = prev;
//                     prev= current;
//                     current  = further;
//                     further = further->next;
                                        
//             }
            current->next = prev;
            prev = current;
            
            return prev;
            
        
    }
};