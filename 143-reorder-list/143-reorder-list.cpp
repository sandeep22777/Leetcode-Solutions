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
        
        ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nexxt;
        
        while(curr){
            nexxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nexxt;
        }
        return prev;
    }
        
        
        
    void reorderList(ListNode* head) {
        
            if(!head || !(head->next) || !(head->next->next)) return;
        
        //Step1: Find middle node (in case of even length, find first middle node)
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast and fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
		//break linked list into 2 (first from start to mid and second from mid+1 to end)
        ListNode* head2 = slow->next;
        slow->next = NULL;
        
        //Step2: Reverse linked list 2 (from mid+1 to end)
        head2 = reverse(head2);
        
        //Step3: Merge 2 linked lists
        ListNode* h = head;
        while(head2){
            ListNode* temp = head2->next;
            head2->next = h->next;
            h ->next = head2;
            head2 = temp;
            h = h->next->next;
        }
    }
};