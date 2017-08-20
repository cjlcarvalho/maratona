#include <iostream>

using namespace std;

int total = -1;

int fib(int n){
    total++;
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int result = fib(x);
        cout << "fib(" << x << ") = " << total << " calls = " << result << endl;
        total = -1;
    }
    return 0;
}
