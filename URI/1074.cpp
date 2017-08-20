#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 0)
            cout << "NULL";
        else if(x % 2){
            cout << "ODD ";
            if(x > 0)
                cout << "POSITIVE";
            else
                cout << "NEGATIVE";
        }
        else{
            cout << "EVEN ";
            if(x > 0)
                cout << "POSITIVE";
            else
                cout << "NEGATIVE";
        }
        cout << endl;
    }
    return 0;
}
