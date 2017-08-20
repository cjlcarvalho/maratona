#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0) n++;
    for(int i = n, j = 0; j < 6; j++, i += 2) cout << i << endl;
    return 0;
}
