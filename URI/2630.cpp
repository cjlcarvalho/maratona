#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t = 1;
    string a;
    double b, c, d;
    cin >> n;
    while(n--){
        cin.ignore();
        cin >> a;
        cin >> b >> c >> d;
        cout << "Caso #" << t << ": ";
        if(a == "min")
            cout << int(min(min(b, c), d));
        else if(a == "max")
            cout << int(max(max(b, c), d));
        else if(a == "mean")
            cout << int((b+c+d)/3);
        else if(a == "eye")
            cout << int(0.3*b + 0.59*c + 0.11*d);
        cout << endl;
        t++;
    }
    return 0;
}
