#include <iostream>

using namespace std;

int main(){
    int n[20];
    int troca;
    for(int i = 0; i < 20; i++)
        cin >> n[i];
    for(int i = 0, j = 19; i<10; i++, j--){
        troca = n[i];
        n[i] = n[j];
        n[j] = troca;
    }
    for(int i = 0; i<20; i++)
        cout << "N[" << i << "] = " << n[i] << endl;
    return 0;        
}
