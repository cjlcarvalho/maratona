#include <iostream>

using namespace std;

int main(){
    int total = 0;
    string n;
    cin >> n;
    for(int i = 0; i<n.size(); i++)
        if(n[i] == '1') total++;
    if(total % 2)
        n.push_back('1');
    else
        n.push_back('0');
    cout << n << endl;
    return 0;
}
