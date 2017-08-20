#include <iostream>

using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    cout << "Total: R$ ";
    if(x == 1)
        printf("%.2f\n", y * 4.0);
    else if(x == 2)
        printf("%.2f\n", y * 4.5);
    else if(x == 3)
        printf("%.2f\n", y * 5);
    else if(x == 4)
        printf("%.2f\n", y * 2);
    else if(x == 5)
        printf("%.2f\n", y * 1.5);
    return 0;
}

