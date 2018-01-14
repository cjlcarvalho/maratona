#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string a, b;
        getline(cin, a);
        getline(cin, b);
        unsigned int i = 0, j = 0;
        while(i < a.size() || j < b.size()){
            if(i < a.size()){
                cout << a[i];
                if(i + 1 < a.size()){
                    cout << a[i+1];
                    i++;
                }
                i++;
            }
            if(j < b.size()){
                cout << b[j];
                if(j + 1 < b.size()){
                    cout << b[j+1];
                    j++;
                }
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}
