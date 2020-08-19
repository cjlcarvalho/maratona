class Solution
{

public:

    struct Node {

        char c;
        Node *next;

        Node()
        {
            c = '\0';
            next = nullptr;
        }

        Node(string s)
        {
            Node *current = this;
            for (char ch : s) {
                current->c = ch;
                current->next = new Node;
                current = current->next;
            }
        }

        void filterPrefix(string s)
        {
            Node *current = this;
            for (char ch : s) {
                if (ch != current->c) {
                    current->c = '\0';
                    current->next = nullptr;
                    return;
                } else {
                    current = current->next;
                }
            }
            if (current->c != '\0') {
                current->c = '\0';
                current->next = nullptr;
            }
        }

    };

    string longestCommonPrefix(vector<string> &strs)
    {
        Node *node = nullptr;
        for (string str : strs) {
            if (node == nullptr) {
                if (str.empty()) {
                    node = new Node;
                } else {
                    node = new Node(str);
                }
            } else {
                node->filterPrefix(str);
            }
        }
        string longestCPrefix;
        for (Node *currentNode = node; currentNode != nullptr; currentNode = currentNode->next) {
            if (currentNode->c != '\0') {
                longestCPrefix.push_back(currentNode->c);
            } else {
                break;
            }
        }
        return longestCPrefix;
    }

};
