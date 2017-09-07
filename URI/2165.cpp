#include <iostream>

using namespace std;

int main(){
    string n;
    getline(cin, n);
    cout << ((n.size() > 140) ? "MUTE" : "TWEET") << endl;
    return 0;
}
