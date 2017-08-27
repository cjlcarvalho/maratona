#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string frase("LIFE IS NOT A PROBLEM TO BE SOLVED");
    for(int i = 0; i<n; i++)
        cout << frase[i];
    cout << endl;
    return 0;
}
