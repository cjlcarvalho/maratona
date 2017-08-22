#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[10];
    cin >> n;
    arr[0] = n;
    for(int i = 1; i<10; i++)
        arr[i] = arr[i-1] * 2;
    for(int i = 0; i<10; i++)
        cout << "N[" << i << "] = " << arr[i] << endl;
    return 0;
}
