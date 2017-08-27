#include <iostream>

using namespace std;

int main(){
    int n;
    string nome;
    cin >> n;
    int x;
    while(n--){
        cin >> nome >> x;
        if(nome == "Thor")
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
