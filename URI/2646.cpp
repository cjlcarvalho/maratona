#include <bits/stdc++.h>

using namespace std;

void contains(char origin, char src[], char dest[], char trans, bool& result){
    bool exists = false;
    for(int i = 0; src[i]; i++){
        if(origin == src[i]){
            contains(dest[i], src, dest, trans, result);
            exists = true;
        }
    }
    if(!exists)
        result = false;
    else if(origin == trans)
        result = true; 
}

int main(){
    int n, m;
    cin >> n >> m;
    char src[n];
    char dest[n];
    for(int i = 0; i<n; i++)
        cin >> src[i] >> dest[i];
    string origin[m], translated[m];
    for(int i = 0; i<m; i++)
        cin >> origin[i] >> translated[i];
    for(int i = 0; i<m; i++){
        if(origin[i].size() != translated[i].size())
            cout << "no" << endl;
        else{
            bool ok = false;
            for(int j = 0; j<int(origin[i].size()); j++){
                if(origin[i][j] != translated[i][j]){
                    contains(origin[i][j], src, dest, translated[i][j], ok);
                }
            }
            if(ok)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}
