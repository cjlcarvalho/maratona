#include <iostream>

using namespace std;

int main(){
    double arr[100];
    for(int i = 0; i<100; i++)
        cin >> arr[i];
    for(int i = 0; i<100; i++)
        if(arr[i] <= 10)
            printf("A[%d] = %.1f\n", i, arr[i]);
    return 0;
}
