#include <iostream>

using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        switch(x + y){
            case 0: cout << "PROXYCITY"; break;
            case 1: cout << "P.Y.N.G."; break;
            case 2: cout << "DNSUEY!"; break;
            case 3: cout << "SERVERS"; break;
            case 4: cout << "HOST!"; break;
            case 5: cout << "CRIPTONIZE"; break;
            case 6: cout << "OFFLINE DAY"; break;
            case 7: cout << "SALT"; break;
            case 8: cout << "ANSWER!"; break;
            case 9: cout << "RAR?"; break;
            case 10: cout << "WIFI ANTENNAS"; break;
        }
        cout << endl;
    }
    return 0;
}
