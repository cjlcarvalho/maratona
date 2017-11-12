#include <bits/stdc++.h>

using namespace std;

int main(){
    char r[7], l[7], j[7];
    while(scanf(" %[^+]s", r) != EOF){
        scanf("+%[^'=']s", l);
        scanf("=%[^\n]s", j);
        if(isdigit(r[0]) && isdigit(l[0]) && !isdigit(j[0]))
            cout << atoi(r) + atoi(l) << endl;
        else if(isdigit(r[0]) && !isdigit(l[0]) && isdigit(j[0]))
            cout << atoi(j) - atoi(r) << endl;
        else if(!isdigit(r[0]) && isdigit(l[0]) && isdigit(j[0]))
            cout << atoi(j) - atoi(l) << endl;
    }
    return 0;
}
