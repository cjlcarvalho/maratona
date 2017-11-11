// comer muito -> mais que dois
// comer algo no jantar que não está nem no café e nem no almoço

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string a;
    cin >> n;
    cin.ignore();
    while(n--){
        string c[3];
        bool cheater = false;
        string result;
        for(int i = 0; i<3; i++)
            getline(cin, c[i]);
        for(int i = 0; i<int(c[0].size()) && !cheater; i++){
            int exist = 1;
            for(int j = 1; j < 3; j++){
                for(int l = 0; l < int(c[j].size()); l++)
                    if(c[j][l] == c[0][i])
                        exist++;
            }
            if(exist > 2) cheater = true;
            else if(exist == 1) result.push_back(c[0][i]);
        }
        for(int i = 0; i < int(c[2].size()) && !cheater; i++){
            bool exist = false;
            for(int j = 0; j<int(c[0].size()); j++)
                if(c[0][j] == c[2][i]) exist = true;
            if(!exist) cheater = true;
        }
        if(cheater) cout << "CHEATER";
        else if(!result.empty()) {
            sort(result.begin(), result.end());
            for(int i = 1; i<int(result.size()); i++)
                if(result[i] == result[i-1]){
                    result.erase(result.begin() + i);
                    i--;
                }
            cout << result;
        }
        cout << endl;
    }
    return 0;
}
