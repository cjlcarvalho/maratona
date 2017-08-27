#include <iostream>

using namespace std;

int main(){
    int n, i;
    int64_t arr[61];
    arr[0] = 0;
    arr[1] = 1;
    int index = 2;
    cin >> n;
    while(n--){
        cin >> i;
        if(i >= index){
            for(int x = index; x <= i; x++){
                arr[x] = arr[x-1] + arr[x-2];
                index++;
            } 
        }
        cout << "Fib(" << i << ") = " << arr[i] << endl;
    }
    return 0;
}
