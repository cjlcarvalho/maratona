#include <iostream>

using namespace std;

int main(){
    int n, y;
    string z;
    while(cin >> n){
        if(n == 0)
            break;
        int total = 0;
        while(n--){
            cin >> y;
            cin.ignore();
            getline(cin, z);
            if(z == "suco de laranja")
                total += (y * 120);
            else if(z == "morango fresco" || z == "mamao")
                total += (y * 85); 
            else if(z == "goiaba vermelha")
                total += (y * 70);
            else if(z == "manga")
                total += (y * 56);
            else if(z == "laranja")
                total += (y * 50);
            else if(z == "brocolis")
                total += (y * 34);
        }
        if(total > 130)
            cout << "Menos " << total - 130 << " mg" << endl;
        else if(total < 110)
            cout << "Mais " << 110 - total << " mg" << endl;
        else
            cout << total << " mg" << endl;
    }
    return 0;
}
