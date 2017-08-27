#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i<n; i++)
        cin >> v[i];
    int menor = v[0];
    int idx = 0;
    for(int i = 0; i<n; i++){
        if(v[i] < menor){
            menor = v[i];
            idx = i;
        }
    }
    cout << idx + 1 << endl;
    return 0;
}
