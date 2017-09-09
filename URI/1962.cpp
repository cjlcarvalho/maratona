#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        int diff = 2015 - x;
        if(diff <= 0)
            cout << -(diff - 1) << " A.C." << endl;
        else
            cout << diff << " D.C." << endl;
    }
    return 0;
}
