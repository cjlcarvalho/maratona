#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a;

    int p = 0, i = 0;

    while (a--) {
        cin >> b;
        
        if (b % 2 == 0) p++;
        else i++;

    }

    if (p > i) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;

    return 0;
}
