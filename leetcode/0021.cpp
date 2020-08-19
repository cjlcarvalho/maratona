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

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *outputList = new ListNode;
        ListNode *currItem = outputList;
        ListNode *currL1 = l1;
        ListNode *currL2 = l2;
        while (currL1 || currL2) {
            if (currL1 && currL2) {
                if (currL1->val <= currL2->val) {
                    currItem->next = new ListNode;
                    currItem = currItem->next;
                    currItem->val = currL1->val;
                    currL1 = currL1->next;
                } else {
                    currItem->next = new ListNode;
                    currItem = currItem->next;
                    currItem->val = currL2->val;
                    currL2 = currL2->next;
                }
            } else if (currL1) {
                currItem->next = new ListNode;
                currItem = currItem->next;
                currItem->val = currL1->val;
                currL1 = currL1->next;
            } else {
                currItem->next = new ListNode;
                currItem = currItem->next;
                currItem->val = currL2->val;
                currL2 = currL2->next;
            }
        }
        return outputList->next;
    }

};
