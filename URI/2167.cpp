#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int velo[n];
    for(int i = 0; i<n; i++) cin >> velo[i];
    int result = 0;
    for(int i = 0, j = i+1; i < (n - 1); i++, j++)
        if(velo[j] < velo[i]){
            result = j + 1;
            break;
        }
    cout << result << endl;
    return 0;
}
