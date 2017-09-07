#include <iostream>

using namespace std;

int main(){
    string n;
    getline(cin, n);
    cout << ((n.size() > 80) ? "NO" : "YES") << endl;
    return 0;
}
