#include <bits/stdc++.h>

using namespace std;

typedef vector< pair<int, int> > vii;
typedef unsigned int ui;
typedef pair<int, int> pi;

double dist(pi a, pi b){
    return hypot(a.first - b.first, a.second - b.second);
}

int main(){
    int n, a, b, t = 1;
    string name;
    while(cin >> n, n){
        vii stds;
        for(int i = 0; i<2*n; i++){
            cin.ignore();
            cin >> name >> a >> b;
            stds.push_back({a, b});
        }
        double menor = -1;
        for(ui i = 0; i < stds.size(); i++){
            for(ui j = 1; j < stds.size(); j++){
                if(i == j) continue;
                double sum = dist(stds[i], stds[j]);
                vii pares;
                for(ui k = 2; k < stds.size(); k++)
                    if(k != i && k != j)
                        pares.push_back(stds[k]);
                for(ui k = 0; k < pares.size(); k+=2)
                    sum += dist(pares[k], pares[k + 1]);
                if(menor == -1) menor = sum;
                else if(sum < menor) menor = sum;
            }
        }
        cout << "Case " << t << ": ";
        cout << fixed << setprecision(2) << menor << endl;
        t++;
    }
    return 0;
}
