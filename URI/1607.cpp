#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    while(n--){
        string a, b;
        cin >> a >> b;
        int total = 0;
        for(unsigned int i = 0; i < a.size(); i++){
            while(a[i] != b[i]){
                if(a[i] == 'z')
                    a[i] = 'a';
                else
                    a[i]++;
                total++;
            }
        }
        cout << total << endl;
    }
    return 0;
}
