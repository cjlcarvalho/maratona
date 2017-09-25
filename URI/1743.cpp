#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet1[5], vet2[5];
    for(int i = 0; i<5; i++)
        cin >> vet1[i];
    for(int i = 0; i<5; i++)
        cin >> vet2[i];
    bool exist = false;
    for(int i = 0; i<5; i++)
        if(vet1[i] == vet2[i])
            exist = true;
    if(exist) cout << "N";
    else  cout << "Y";
    cout << endl;
    return 0;
}
