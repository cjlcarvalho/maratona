#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    cin >> n;

    while (n--) {
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        if (((rx > ax && rx < cx && rx > dx && rx < bx) || (rx > cx && rx < ax && rx < dx && rx < bx)) && ((ry > ay && ry < dy && ry > by && ry < cy) || (ry < ay && ry > dy && ry < by && ry > cy)))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
