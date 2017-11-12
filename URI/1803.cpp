#include <bits/stdc++.h>

using namespace std;

int main(){
    string matring[4];
    for(int i = 0; i<4; i++) cin >> matring[i];
    string f, l;
    for(int i = 0; i<4; i++){
        f.push_back(matring[i][0]);
        l.push_back(matring[i][matring[0].size() - 1]);
    }
    for(int j = 1; j<int(matring[0].size()) - 1; j++){
        string result;
        for(int i = 0; i<4; i++)
            result.push_back(matring[i][j]);
        cout << char((stoi(f) * stoi(result) + stoi(l)) % 257);
    }
    cout << endl;
    return 0;
}
