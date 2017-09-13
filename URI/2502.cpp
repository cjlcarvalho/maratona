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
            for(int i = 0; i<result.size(); i++){
                bool find = false;
                for(int j = 0; j<b.size(); j++){
                    char letra = (result[i] >= 'a' && result[i] <= 'z') ? b[j] + ' ' : b[j];
                    if(result[i] == letra){
                        if (result[i] >= 'a' && result[i] <= 'z')
                            result[i] = a[j] + ' ';
                        else if(result[i] >= 'A' && result[i] <= 'Z')
                            result[i] = a[j];
                        else if(a[j] != ' ')
                            result[i] = a[j] + ' ';
                        else
                            result[i] = ' ';
                        find = true;
                    }
                }
                if(!find){
                    for(int j = 0; j<a.size(); j++){
                        char letra = (result[i] >= 'a' && result[i] <= 'z') ? a[j] + ' ' : a[j];
                        if(result[i] == letra){
                            if(result[i] >= 'a' && result[i] <= 'z')
                                result[i] = b[j] + ' ';
                            else if(result[i] >= 'A' && result[i] <= 'Z')
                                result[i] = b[j];
                            else if(b[j] == ' ')
                                result[i] = b[j];
                            else
                                result[i] = b[j] + ' ';
                            find = true;
                        }
                    }
                }
            }
            cout << result << endl;
        }
        cout << endl;
    }
    return 0;
}
