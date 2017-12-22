#include <bits/stdc++.h>

using namespace std;

bool check(string a){
    if(a.size() != 8) return false;
    for(int i = 0; i<3; i++)
        if(!isupper(a[i]))
            return false;
    if(a[3] != '-') return false;
    for(int i = 4; i < 8; i++)
        if(!isdigit(a[i]))
            return false;
    return true;
}

int main(){
    int n;
    string a;
    cin >> n;
    cin.ignore();
    while(n--){
        cin >> a;
        if(!check(a))
            cout << "FAILURE" << endl;
        else if(a[7] == '1' || a[7] == '2')
            cout << "MONDAY" << endl;
        else if(a[7] == '3' || a[7] == '4')
            cout << "TUESDAY" << endl;
        else if(a[7] == '5' || a[7] == '6')
            cout << "WEDNESDAY" << endl;
        else if(a[7] == '7' || a[7] == '8')
            cout << "THURSDAY" << endl;
        else if(a[7] == '9' || a[7] == '0')
            cout << "FRIDAY" << endl;
    }
    return 0;
}
