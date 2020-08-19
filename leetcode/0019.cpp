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

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        stack<ListNode *> nodeStack;
        ListNode *item = head;
        while (item != nullptr) {
            nodeStack.push(item);
            item = item->next;
        }
        ListNode *currentNode = nullptr;
        if (head->next != nullptr) {
            while (n--) {
                currentNode = nodeStack.top();
                nodeStack.pop();
            }
            if (!nodeStack.empty()) {
                ListNode *prevNode = nodeStack.top();
                nodeStack.pop();
                prevNode->next = currentNode->next;
            } else {
                head = head->next;
            }
        } else {
            head = nullptr;
        }
        return head;
    }

};
