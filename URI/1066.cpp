#include <iostream>

using namespace std;

int main(){
    int n;
    int odd, even, pos, neg;
    odd = even = pos = neg = 0;
    for(int i = 0; i<5; i++){
        cin >> n;
        if(n % 2)
            odd++;
        else
            even++;
        
        if(n > 0)
            pos++;
        else if(n < 0)
            neg++;
    }
    
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    return 0;

}
