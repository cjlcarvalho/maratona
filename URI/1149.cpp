#include <iostream>

using namespace std;

int main(){
    int a, n;
    cin >> a;
    do{
        cin >> n;
    } while(n <= 0);
    int soma = 0;
    for(int i = a; i < a + n; i++)
        soma += i;
    cout << soma << endl;
    return 0;
}
