#include <bits/stdc++.h>

using namespace std;

int qtDias(int mes){
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        return 31;
    else if(mes == 2)
        return 28;
    return 30;
}

int main(){
    int a, b, c, d, total;
    cin >> a >> b >> c >> d;
    if(c >= a && b == d)
        cout << c - a << endl;
    else {
        total = qtDias(b) - a;
        for(int i = b + 1; i < d; i++)
            total += qtDias(i);
        total += c;
        cout << total << endl;
    }
    return 0;
}
