#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    while(cin >> a){
        int result = 0;
        for(int i = 0; i<a.size(); i++){
            if(a[i] < 'a')
                result += (a[i] - 38);
            else
                result += (a[i] - 96);
        }
        bool prime = true;
        for(int i = 2; i<=result/2; i++){
            if(result % i == 0){
                prime = false;
                break;
            }
        }
        if(prime)
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
    return 0;
}
