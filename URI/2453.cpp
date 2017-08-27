#include <iostream>

using namespace std;

int main(){
    string frase;
    
    getline(cin, frase);
    
    for(int i = 0; i<frase.size(); i++){
        if(frase[i] == 'p')
            i++;
        cout << frase[i];
    }
    cout << endl;
    return 0;
}
