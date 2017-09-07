#include <iostream>

using namespace std;

int main(){
    int n;
    double total = 0;
    int x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        switch(x){
            case 1001: total += (y * 1.50); break;
            case 1002: total += (y * 2.5); break;
            case 1003: total += (y * 3.5); break;
            case 1004: total += (y * 4.5); break;
            case 1005: total += (y * 5.5); break;
        } 
    }
    printf("%.2f\n", total);
    return 0;
}
