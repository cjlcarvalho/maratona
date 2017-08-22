#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string x;
        vector<string> v;
        cin.ignore();
        getline(cin, x);
        int inicio = 0;
        for(int i = 0; i<x.size(); i++){
            if(x[i] == ' '){
                if(inicio == 0)
                    v.push_back(x.substr(inicio, i - inicio));
                else
                    v.push_back(x.substr(inicio + 1, i - inicio - 1));
                inicio = i; 
            }
            else if(i == x.size() - 1){
                v.push_back(x.substr(inicio + 1, i + 1 - inicio));
                inicio = i;
            }
        }
        for(int i = v.size() - 1; i>=0; i--){
            for(int j = 0; j<i; j++){
                if(v[j].size() < v[j+1].size()){
                    string temp = v[j];
                    v[j] = v[i];
                    v[i] = temp;
                }
            }
        }
        for(int i = 0; i<v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
