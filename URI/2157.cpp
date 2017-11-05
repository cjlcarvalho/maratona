#include <bits/stdc++.h>

using namespace std;

void espelho(int a, int b){
    int j;
    for(int i = a; i<=b; i++) cout << i;
    for(int i = b; i >= a; i--){
        j = i;
        while(j){
            cout << j % 10;
            j /= 10;
        }
    }
    cout << endl;
}

int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        espelho(a, b);
    }
    return 0;
}
