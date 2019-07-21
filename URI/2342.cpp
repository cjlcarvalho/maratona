#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, b;
    char c;

    cin >> n;
    cin >> a >> c >> b;

    int result;
    if (c == '*')
        result = a * b;
    else
        result = a + b;

    if (result > n)
        cout << "OVERFLOW" << endl;
    else
        cout << "OK" << endl;
    return 0;
}
