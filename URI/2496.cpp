#include <bits/stdc++.h>

using namespace std;

int solve(string vet, int n){
    int result = 0;
    for(int i = 0; i<n; i++){
        if((vet[i] - 65) != i)
            result++;
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        cin.ignore();
        string str;
        getline(cin, str);
        int result = solve(str, a);
        if(result == 2)
            cout << "There are the chance." << endl;
        else
            cout << "There aren't the chance." << endl;
    }
    return 0;
}
