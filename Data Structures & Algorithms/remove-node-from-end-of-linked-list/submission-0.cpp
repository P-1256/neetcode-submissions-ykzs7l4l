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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* temp2 =head;

        int len=0;
        while(temp != NULL){
            len++;
            temp=temp->next;
        }
        int nth=len-n+1;

        if(nth==1){
            return head=head->next;
        }else{
            for(int i=1; i<nth-1;i++){
                temp2=temp2->next;
            }
            temp2->next = temp2->next->next;
        }
        return head;
    }
};
