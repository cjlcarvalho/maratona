#include <iostream>

using namespace std;

int main(){
    int n, x;
    int i = 0, o = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x >= 10 && x <= 20)
            i++;
        else
            o++;
    }
    cout << i << " in" << endl;
    cout << o << " out" << endl;
    return 0;
}
