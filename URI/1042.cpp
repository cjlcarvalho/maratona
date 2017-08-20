#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(x <= y && x <= z)
        cout << x << endl;
    else if(y <= x && y <= z)
        cout << y << endl;
    else if(z <= x && z <= y)
        cout << z << endl;
        
    if((y <= x && x <= z) || (z <= x && x <= y))
        cout << x << endl;
    else if((x <= y && y <= z) || (z <= y && y <= x))
        cout << y << endl;
    else if((x <= z && z <= y) || (y <= z && z <= x))
        cout << z << endl;
        
    if(x >= y && x >= z)
        cout << x << endl;
    else if(y >= x && y >= z)
        cout << y << endl;
    else if(z >= x && z >= y)
        cout << z << endl;
        
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0; 
}
