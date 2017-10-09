#include <iostream>

using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        string a, b;
        cin.ignore();
        getline(cin, a);
        getline(cin, b);
        for(int i = 0; i<y; i++){
            string result;
            getline(cin, result);
            for(int i = 0; i<int(result.size()); i++){
                bool find = false;
                for(int j = 0; j<int(b.size()); j++){
                    char letra = islower(result[i]) ? (b[j] + ' ') : b[j];
                    if(result[i] == letra){
                        if (islower(result[i]) && isupper(a[j]))
                            result[i] = a[j] + ' ';
                        else if(islower(result[i]) && islower(a[j]))
                            result[i] = a[j];
                        else if(isupper(result[i]) && islower(a[j]))
                            result[i] = a[j] - 32;
                        else if(isupper(result[i]) && isupper(a[j]))
                            result[i] = a[j];
                        else if(!isupper(result[i]) && !islower(result[i]) && isupper(a[j]))
                            result[i] = a[j] + 32;
                        else
                            result[i] = a[j];
                        find = true;
                    }
                }
                if(!find){
                    for(int j = 0; j<int(a.size()); j++){
                        char letra = islower(result[i]) ? a[j] + ' ' : a[j];
                        if(result[i] == letra){
                            if (islower(result[i]) && isupper(b[j]))
                                result[i] = b[j] + ' ';
                            else if(islower(result[i]) && islower(b[j]))
                                result[i] = b[j];
                            else if(isupper(result[i]) && islower(b[j]))
                                result[i] = b[j] - 32;
                            else if(isupper(result[i]) && isupper(b[j]))
                                result[i] = b[j];
                            else if(!isupper(result[i]) && !islower(result[i]) && isupper(b[j]))
                                result[i] = b[j] + 32;
                            else
                                result[i] = b[j];
                            find = true;
                        }
                    }
                }
            }
            cout << result << "\n";
        }
        cout << "\n";
    }
    return 0;
}
