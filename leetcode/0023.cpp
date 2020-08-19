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

    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *outputList = new ListNode;
        ListNode *currItem = outputList;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] == nullptr) {
                lists.erase(lists.begin() + i);
                i--;
            }
        }
        while (!lists.empty()) {
            int minItemIndex = 0;
            for (int i = 0; i < lists.size(); i++) {
                if (lists[i]->val < lists[minItemIndex]->val) {
                    minItemIndex = i;
                }
            }
            currItem->next = new ListNode;
            currItem = currItem->next;
            currItem->val = lists[minItemIndex]->val;
            lists[minItemIndex] = lists[minItemIndex]->next;
            if (lists[minItemIndex] == nullptr) {
                lists.erase(lists.begin() + minItemIndex);
            }
        }
        return outputList->next;
    }

};
