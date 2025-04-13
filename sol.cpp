
class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            
    
            // brute force approach.
            
            int l = 0;
            ListNode* temp = head;
            while(temp !=NULL){
                l++;
                temp = temp -> next;
            }
    
            int k = l-n;
    
             // Case: remove the head node
            if (k == 0) {
                ListNode* newHead = head->next;
                head->next = NULL;
                delete head;
                return newHead;
            }
    
    
    
    
            ListNode* prev = NULL;
            ListNode * curr = head;
    
            while(k>0){
                prev = curr;
                curr = curr -> next;
                k--;
            }
          
          prev -> next = curr -> next;
          curr -> next = NULL;
          delete curr;
          return head;
    
        }
    };