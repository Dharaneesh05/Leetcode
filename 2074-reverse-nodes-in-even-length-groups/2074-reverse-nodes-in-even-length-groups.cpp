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

    ListNode* reverse_LL(ListNode* head){
        ListNode *temp = head;
        ListNode *prev = NULL;
        ListNode *front = NULL;
        while (temp != NULL)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    // t.c: O(2n)...
    // s.c: O(1)...
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(!head || head->next == NULL) return head;
        ListNode* t= head;
        ListNode* prev = NULL;
        int grp = 1;

        while(t){
            int cnt = 1;
            ListNode* kth = t;

            while(kth && kth->next && cnt < grp){
                cnt++;
                kth = kth->next;
            }

            if((cnt & 1) != 0){
                prev = kth;
                t = kth->next;
            }
            else{
                ListNode* next = kth->next;
                kth->next = NULL;
                reverse_LL(t);
                if(prev) prev->next = kth;
                prev = t;
                t->next = next;
                t = next;
            }
            grp++;
        }
        return head;
    }
};