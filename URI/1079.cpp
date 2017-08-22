#include <iostream>

using namespace std;

int main(){
    int n;
    double x, y, z;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        printf("%.1f\n", ((x * 2) + (y * 3) + (z * 5))/10);
    }
    return 0;
}
