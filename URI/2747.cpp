#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i = 0; i < 39; i++) cout << "-";
    cout << endl;

    for (int j = 0; j < 5; j++) {
        cout << "|";
        for (int i = 0; i < 37; i++) cout << " ";
        cout << "|";
        cout << endl;
    }

    for (int i = 0; i < 39; i++) cout << "-";
    cout << endl;

    return 0;
}
