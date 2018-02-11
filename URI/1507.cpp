#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    string a, b;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, a);
        cin >> m;
        cin.ignore();
        while(m--){
            getline(cin, b);
            unsigned int j = 0;
            for(unsigned int i = 0; i < a.size() && j < b.size(); i++)
                if(a[i] == b[j])
                    j++;
            if(j == b.size())
                cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
