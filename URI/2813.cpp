#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int casa = 0, trab = 0, t1 = 0, t2 = 0;

    string a, b;

    while (n--) {
        cin >> a >> b;

        if (a == "chuva") {
            if (t1 == 0) {
                casa++;
                t2++;
            }
            else {
                t1--;
                t2++;
            }
        }

        if (b == "chuva") {
            if (t2 == 0) {
                trab++;
                t1++;
            }
            else {
                t2--;
                t1++;
            }
        }
    }

    cout << casa << " " << trab << endl;

    return 0;
}
