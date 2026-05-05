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
    int lenLL(ListNode* head){
        if(!head) return 1;
        int len = 0;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            len++;
            slow= slow->next;
            fast= fast->next->next;
        }
        len*=2;
        if(fast)len++;
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        
        int len = lenLL(head);
        k=k%len;

        if(k==0 || !head ||!head->next) return head;

        int a = len-k;
        ListNode* front = head;
        ListNode* last = head;

        while(last->next){
            a--;
            if(a>0)front = front->next;
            last = last->next;
        }

        ListNode* newHead = front->next;
        front->next = nullptr;
        last->next = head;

        return newHead;
    }
};