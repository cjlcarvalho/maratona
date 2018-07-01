#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    
    cin >> a >> b;
    
    string aa({char(a[0] - 2), char(a[1] + 1)});
    string ab({char(a[0] - 1), char(a[1] + 2)});
    string ac({char(a[0] + 1), char(a[1] + 2)});
    string ad({char(a[0] + 2), char(a[1] + 1)});
    string ae({char(a[0] + 2), char(a[1] - 1)});
    string af({char(a[0] + 1), char(a[1] - 2)});
    string ag({char(a[0] - 1), char(a[1] - 2)});
    string ah({char(a[0] - 2), char(a[1] - 1)});
    
    if (b == aa || b == ab || b == ac || b == ad || b == ae || b == af || b == ag || b == ah)
        cout << "VALIDO" << endl;
    else
        cout << "INVALIDO" << endl;
    
    return 0;
}
