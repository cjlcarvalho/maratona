#include <iostream>

using namespace std;

int abs(int x){
    return (x < 0) ? -x : x;
}
int maior(int a, int b){
    return (a + b + abs(a - b))/2;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c;
    cout << maior(maior(a, b), c) << " eh o maior" << endl;
    return 0;
}
