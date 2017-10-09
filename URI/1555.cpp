#include <bits/stdc++.h>

using namespace std;

int rafael(int x, int y){
    return (3*x)*(3*x) + y*y;
}

int beto(int x, int y){
    return 2*(x*x) + (5*y)*(5*y);
}

int carlos(int x, int y){
    return -100 * x + (y * y * y);
}

int main(){
    int n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        int raf = rafael(x, y);
        int bet = beto(x, y);
        int car = carlos(x, y);
        if(raf > bet && raf > car)
            cout << "Rafael ganhou" << endl;
        else if(bet > raf && bet > car)
            cout << "Beto ganhou" << endl;
        else if(car > bet && car > raf)
            cout << "Carlos ganhou" << endl;
    }
    return 0;
}
