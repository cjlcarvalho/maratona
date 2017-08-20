#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    printf("%.0f minutos\n", (((double)x)/30.0) * 60);
    return 0;
}
