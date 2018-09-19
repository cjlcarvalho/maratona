#include <iostream>

using namespace std;

int main()
{
    int n, a;
    
    cin >> n;

    while (n--) {
        int total = 0;

        cin >> a;

        while (a) {
            
            if (a % 10 == 4) total++;

            a /= 10;
        }

        cout << total << endl;
    }

    return 0;
}
