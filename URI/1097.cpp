#include <iostream>

using namespace std;

int main(){
    int n = 7;
    for(int i = 1; i<=9; i+=2){
        int x = n - 2;
        for(int j = n; j >= x; j--)
            cout << "I=" << i << " J=" << j << endl;
        n += 2;
    }
    return 0;
}
