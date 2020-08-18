/**
 * Definition for singly-linked list.
 *
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *currentL1 = l1;
        ListNode *currentL2 = l2;
        ListNode *resultList = new ListNode;
        ListNode *currentNode = resultList;
        while (currentL1 || currentL2) {
            if (currentL1) {
                currentNode->val += currentL1->val;
                currentL1 = currentL1->next;
            }
            if (currentL2) {
                currentNode->val += currentL2->val;
                currentL2 = currentL2->next;
            }
            if (currentL1 || currentL2 || currentNode->val >= 10) {
                currentNode->next = new ListNode(currentNode->val / 10);
            }
            currentNode->val %= 10;
            currentNode = currentNode->next;
        }
        return resultList;
    }
};
