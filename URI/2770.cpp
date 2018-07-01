#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e;
    
    while (cin >> a >> b >> c) {
        while (c--){
            cin >> d >> e;
        
            if ((d <= a && e <= b) || (d <= b && e <= a))
                cout << "Sim" << endl;
            else
                cout << "Nao" << endl;
        }
    }
    
    return 0;
}
