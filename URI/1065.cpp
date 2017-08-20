#include <iostream>

using namespace std;

int main(){
    int total = 0;
    int n;
    for(int i = 0; i<5; i++){
        cin >> n;
        if(n % 2 == 0)
            total++;
    }
    cout << total << " valores pares" << endl;
    return 0;
}
