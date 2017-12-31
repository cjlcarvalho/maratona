#include <bits/stdc++.h>

using namespace std;

bool compare(float a, float b){
    return a > b;
}

int main(){
    int n, sum = 0;
    cin >> n;
    float vet[n];
    for(int i = 0; i<n; i++){
        cin >> vet[i];
        sum += vet[i];
    }
    sort(vet, vet + n, compare);
    if(vet[0] >= (sum * 0.45F))
        cout << 1 << endl;
    else if(vet[0] >= (sum * 0.4F)){
        float dec = sum * 0.1F;
        bool flag = true;
        for(int i = 1; i<n && flag; i++)
            if(vet[0] < (vet[i] + dec))
                flag = false;
        if(flag) cout << 1 << endl;
        else cout << 2 << endl;
    }
    else
        cout << 2 << endl;
    return 0;
}
