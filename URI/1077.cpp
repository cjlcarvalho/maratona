#include <bits/stdc++.h>

using namespace std;

struct No
{
    char v;
    No *e;
    No *d;

    No(char vv, No *ee, No *dd) :
        v(vv),
        e(ee),
        d(dd)
    {
    }
};

No *makeTree(string exp)
{
    queue<No *> nodes;

    for (char c : exp) {
        if (c == '(') {
            No *n = new No(c, nullptr, nullptr);
            nodes.push(n);
        }
        else if (c == ')') {
            
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            No *n = new No(c, nullptr, nullptr);
            n->esq = nodes.front();
            nodes.pop();
            nodes.push(n);
        }
        else {
            No *n = new No(c, nullptr, nullptr);
        }
    }

    return no;
}



int main()
{

    return 0;
}
