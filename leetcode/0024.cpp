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

class Solution
{

public:

    ListNode *swapPairs(ListNode *head)
    {
        ListNode *f = head;
        ListNode *s = nullptr;
        ListNode *p = nullptr;
        while (f != nullptr) {
            s = f->next;
            if (s != nullptr) {
                f->next = s->next;
                s->next = f;
                if (f == head) {
                    head = s;
                }
                if (p != nullptr) {
                    p->next = s;
                }
                p = f;
            }
            f = f->next;
        }
        return head;
    }

};
