#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, result;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a >> b;
        cout << "Case " << i << ": ";
        result = 0;
        for(int j = a; j <= b; j++)
            if(j % 2)
                result += j;
        cout << result << endl;
    }
    return 0;
}
