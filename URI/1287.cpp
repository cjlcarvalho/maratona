#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    while(getline(cin, a)){
        string result;
        for(int i = 0; i<int(a.size()); i++){
            if(a[i] == 'O' || a[i] == 'o') result.push_back('0');
            else if(a[i] == 'l') result.push_back('1');
            else if(a[i] != ',' && a[i] != ' ') result.push_back(a[i]);
        }
        if(result.empty())
            cout << "error" << endl;
        else{
            bool error = false;
            for(int i = 0; i < int(result.size()); i++)
                if(!isdigit(result[i]))
                    error = true;
            int start = 0;
            while(result[start] == '0') start++;
            if(error || result.size() - start > 10)
                cout << "error" << endl;
            else{
                int64_t num = stoll(result);
                if(num > 2147483647LL)
                    cout << "error" << endl;
                else
                    cout << num << endl;
            }
        }
    }
    return 0;
}
