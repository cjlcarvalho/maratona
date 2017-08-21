#include <iostream>

using namespace std;

int main(){
    double a = new double[6];
    int total = 0;
    for(int i = 0; i<6; i++)
        cin >> a[i];
    for(double i : a)
        if(i > 0)
            total++;
    cout << total << " valores positivos" << endl;
    return 0;
}
