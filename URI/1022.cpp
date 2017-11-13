#include <iostream>

using namespace std;

int multiplicador(int x, int y){
    int min = (x < y) ? x : y;
    min = (min < 0) ? -min : min;
    for(int i = min; i>=2; i--)
        if(x % i == 0 && y % i == 0)
            return i;
    return 0;
}

int main(){
    
    int n, n1, n2, d1, d2, x, d;
    x = 0;
    d = 0;
    char bar1, bar2, op;
    
    cin >> n;
    while(n--){
        cin >> n1 >> bar1 >> d1 >> op >> n2 >> bar2 >> d2;
        if(op == '+'){
            x = n1 * d2 + n2 * d1;
            d = d1 * d2;
        }
        else if(op == '-'){
            x = n1 * d2 - n2 * d1;
            d = d1 * d2;
        }
        else if(op == '*'){
            x = n1 * n2;
            d = d1 * d2;
        }
        else if(op == '/'){
            x = (n1 * d2);
            d = (n2 * d1);
        }
        int m = multiplicador(x, d);
        cout << x << "/" << d << " = " << ((m) ? (x / m) : x) << "/" << ((m) ? (d/m) : d) << endl;     
    }
    return 0;
}
