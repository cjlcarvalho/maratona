#include <iostream>

using namespace std;

int main(){
    int c;
    int co;
    cin >> c;
    int total = 0;
    for(int i = 0; i<5; i++){
        cin >> co;
        if(co == c)
            total++;
    }
    cout << total << endl;
    return 0;
}
        
