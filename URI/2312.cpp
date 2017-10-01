#include <bits/stdc++.h>

using namespace std;

struct Country{
    string name;
    int gold;
    int silver;
    int bronze;
};

bool compare(Country a, Country b){
    if(a.gold > b.gold)
        return a.gold > b.gold;
    else if(a.gold == b.gold && a.silver > b.silver)
        return a.gold == b.gold && a.silver > b.silver;
    else if(a.gold == b.gold && a.silver == b.silver && a.bronze > b.bronze)
        return a.gold == b.gold && a.silver == b.silver && a.bronze > b.bronze;
    else if(a.gold == b.gold && a.silver == b.silver && a.bronze == b.bronze && a.name < b.name)
        return (a.gold == b.gold && a.silver == b.silver && a.bronze == b.bronze && a.name < b.name);
    else
        return false;
}

int main(){
    int n;
    cin >> n;
    Country paises[n];
    for(int i = 0; i<n; i++){
        cin >> paises[i].name >> paises[i].gold >> paises[i].silver >> paises[i].bronze;
    }
    sort(paises, paises + n, compare);
    for(int i = 0; i<n; i++)
        cout << paises[i].name << " " << paises[i].gold << " " << paises[i].silver << " " << paises[i].bronze << endl;
    return 0;
}
