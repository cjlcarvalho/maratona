#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        char s1[51];
        char s2[51];
        scanf("%50s", s1);
        scanf(" %50s", s2);
        int i = 0, j = 0;
        while(true){
            if(i >= strlen(s1) && j >= strlen(s2)) break;
            else if(i < strlen(s1) && j < strlen(s2)){
                cout << s1[i] << s2[j];
                i++;
                j++;
            }
            else if(i < strlen(s1)){
                cout << s1[i];
                i++;
            }
            else if(j < strlen(s2)){
                cout << s2[j];
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}
