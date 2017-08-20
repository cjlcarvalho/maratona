#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int64_t a, b;
    while(cin >> a >> b){
        int64_t result = 0;
        int base = 0;
        while(a > 0 || b > 0){
            if(!(a % 2 && b % 2) && (a % 2 || b % 2))
                result += pow(2, base);
            a /= 2;
            b /= 2;
            base++;    
        }
        cout << result << endl;
    }
    return 0;
}
