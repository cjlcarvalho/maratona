#include <iostream>

using namespace std;

int main(){
    int t, maior = 0, p = 0;
    int n = 1;
    while(n <= 100){
        cin >> t;
        if(t >= maior){
            maior = t;
            p = n;
        }
        n++;        
    }
    cout << maior << endl;
    cout << p << endl;
    return 0;
}
