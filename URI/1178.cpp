#include <iostream>

using namespace std;

int main(){
    double n;
    cin >> n;
    double arr[100];
    for(int i = 0; i<100; i++){
        arr[i] = n;
        n /= 2;
    }
    for(int i = 0; i<100; i++)
        printf("N[%d] = %.4f\n", i, arr[i]);
    return 0;
}
