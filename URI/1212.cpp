#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(!a && !b) break;
        int total = 0;
        int carry = 0;
        while(a > 0 || b > 0 || carry){
            int c = a % 10;
            int d = b % 10;
            int result = c + d + carry;
            if(result > 9){
                total++;
                carry = 1;
            }
            else
                carry = 0;  
            
            a /= 10;
            b /= 10; 
        }
        if(total){
            cout << total;
            if(total == 1)
                cout << " carry operation."; 
            else
                cout << " carry operations.";
        }
        else
            cout << "No carry operation.";
        cout << endl;
    }
    return 0;
}
