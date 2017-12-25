#include <bits/stdc++.h>

using namespace std;

struct Lutador {
    string nome;
    int poder;
    int deuses;
    int mortes;
};

bool compare(Lutador a, Lutador b){
    if(a.poder > b.poder)
        return true;
    else if(a.poder == b.poder && a.deuses > b.deuses)
        return true;
    else if(a.poder == b.poder && a.deuses == b.deuses && a.mortes < b.mortes)
        return true;
    else if(a.poder == b.poder && a.deuses == b.deuses && a.mortes == b.mortes && a.nome < b.nome)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin >> n;
    Lutador a[n];
    for(int i = 0; i<n; i++){
        cin.ignore();
        cin >> a[i].nome >> a[i].poder >> a[i].deuses >> a[i].mortes;
    }
    sort(a, a + n, compare);
    cout << a[0].nome << endl;
    return 0;
}
