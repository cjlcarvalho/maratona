#include <bits/stdc++.h>

using namespace std;

int main(){
    int ant = -1;
    int atual;
    bool check = false;
    while(cin >> atual){
        if(!check){
            if(ant == -1)
                ant = atual;
            else if(atual >= ant)
                ant = atual;
            else
                check = true;
        }
    }
    cout << ant + 1 << endl;
    return 0;
}
