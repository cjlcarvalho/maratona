#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, temp, result;
    cin >> n;
    while(n--){
        temp = result = 0;
        cin >> m;
        while(m){
            if(m % 2){
                temp++;
                if(temp >= result) result = temp;
            }
            else
                temp = 0;
            m /= 2;
        }
        cout << result << endl;
    }
    return 0;
}
