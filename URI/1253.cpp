#include <iostream>

using namespace std;

int main(){
    int n, x;
    char desloc;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, s);
        cin >> x;
        cin.ignore();
        for(int i = 0; i<s.size(); i++){
            desloc = s[i] - x;
            if(desloc < 'A')
                desloc = 'Z' - ('A' - desloc - 1);
            s[i] = desloc;
        }
        cout << s << endl;
    }
    return 0;
}
