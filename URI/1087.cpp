#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, cont;
    while(cin >> a >> b >> c >> d){
        if(!a && !b && !c && !d) break;
        cont = 0;
        if(a != c && b != d){
            cont++;
            while(a != c && b != d && a >= 1 && a <= 8 && b >= 1 && b <= 8){
                if(a < c && b > d){
                    a++;
                    b--;
                }
                else if(a < c && b < d){
                    a++;
                    b++;
                }
                else if(a > c && b > d){
                    a--;
                    b--;
                }
                else if(a > c && b < d){
                    a--;
                    b++;
                }
            }
        }
        if(a != c || b != d)
            cont++;
        cout << cont << endl;
    }
    return 0;
}
