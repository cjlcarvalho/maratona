#include <iostream>

using namespace std;

int main(){
    int x, y, total = 0;
    cin >> x >> y;
    
    if(y > x){
        for(int i = x + 1; i < y; i++)
            if(i % 2)
                total += i;
    }
    else{
        for(int i = y + 1; i < x; i++)
            if(i % 2)
                total += i;
    }
    cout << total << endl;
    return 0;
}
