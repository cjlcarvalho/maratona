#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, total = 7;
    cin >> n;
    if(n > 100){
        total += (n - 100) * 5;
        n -= (n - 100);
    }
    if(n > 30){
        total += (n - 30) * 2;
        n -= (n - 30);
    }
    if(n > 10){
        total += (n - 10) * 1;
        n -= (n - 10);
    }
    cout << total << endl;
    return 0;
}
