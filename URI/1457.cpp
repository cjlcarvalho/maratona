#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    int64_t result, num;
    unsigned int i;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        cin >> s;
        result = 0;
        for(i = 0; i<s.size(); i++)
            if(s[i] == '!')
                break;
        k = s.size() - i;
        result = stoull(s.substr(0, i));
        num = result;
        i = 1;
        while(num - (k * i) > 1){
            result *= (num - (k*i));
            i++;
        }
        cout << result << endl;
    }
    return 0;
}
