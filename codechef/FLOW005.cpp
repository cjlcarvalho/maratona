#include <iostream>

using namespace std;

int main()
{
    int n, a;

    cin >> n;

    while (n--) {
        cin >> a;

        int total = 0;

        while (a) {
            if (a >= 100) {
                total += a / 100;
                a %= 100;
            }
            else if (a >= 50) {
                total += a / 50;
                a %= 50;
            }
            else if (a >= 10) {
                total += a / 10;
                a %= 10;
            }
            else if (a >= 5) {
                total += a / 5;
                a %= 5;
            }
            else if (a >= 2) {
                total += a / 2;
                a %= 2;
            }
            else {
                total++;
                a = 0;
            }
        }

        cout << total << endl; 
    }

    return 0;
}
