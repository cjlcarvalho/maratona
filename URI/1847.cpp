#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    
    if(y < x && z >= y)
        cout << ":)" << endl;
    else if(y > x && z <= y)
        cout << ":(" << endl;
    else if(y > x && z > y && (z - y) < (y - x))
        cout << ":(" << endl;
    else if(y > x && z > y && (z - y) >= (y - x))
        cout << ":)" << endl;
    else if(y < x && z < y && (y - z) < (x - y))
        cout << ":)" << endl;
    else if(y < x && z < y && (y - z) >= (x - y))
        cout << ":(" << endl;
    else if(x == y && z > y)
        cout << ":)" << endl;
    else
        cout << ":(" << endl;
    return 0;
}
