#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int b, result;
    while(cin >> a){
        cin >> b;
        cin.ignore();
        result = 0;
        for(int i = 0; i<int(a.size()); i++){
            if(a[i] == 'W') result++;
            else if(a[i] == 'R'){
                int temp = 0;
                while(a[i] == 'R' && i < int(a.size()) && temp++ < b) i++;
                i--;
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}
