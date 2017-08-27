#include <iostream>

using namespace std;

int main(){
    string piscar;
    int n = 0;
    int total = 0;
    while(n < 3){
        getline(cin, piscar);
        if(piscar == "caw caw"){
            cout << total << endl;
            total = 0;
            n++;
        }
        else{
            if(piscar[0] == '*')
                total += 4;
            if(piscar[1] == '*')
                total += 2;
            if(piscar[2] == '*')
                total += 1;
        }
    }
    return 0;
}
