#include <bits/stdc++.h>

using namespace std;

int main()
{
    string dt;

    cin >> dt;

    cout << dt.substr(3, 2) << "/" << dt.substr(0, 2) << "/" << dt.substr(6, 2) << endl;
    cout << dt.substr(6, 2) << "/" << dt.substr(3, 2) << "/" << dt.substr(0, 2) << endl;
    cout << dt.substr(0, 2) << "-" << dt.substr(3, 2) << "-" << dt.substr(6, 2) << endl;

    return 0;
}
