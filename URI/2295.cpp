#include <iostream>

using namespace std;

int main()
{
    float a, g, ra, rg;

    cin >> a >> g >> ra >> rg;

    if (rg == ra && a == g)
        cout << "G" << endl;
    else if (rg > ra) {
        float diff = (rg - ra) / ra;
        a += (a * diff);

        if (a < g)
            cout << "A" << endl;
        else
            cout << "G" << endl;
    }
    else {
        float diff = (ra - rg) / rg;
        g += (g * diff);

        if (a < g)
            cout << "A" << endl;
        else
            cout << "G" << endl;
    }
    return 0;
}
