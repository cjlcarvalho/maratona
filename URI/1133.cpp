#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int min, max;
    if(x < y){
        min = x;
        max = y;
    }
    else{
        min = y;
        max = x;
    }
    for(int i = min + 1; i<max; i++){
        if(i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }
    return 0;
}
