#include <iostream>

using namespace std;

int countLeds(char n){
    switch(n){
        case '1': return 2;
        case '2': return 5;
        case '3': return 5;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 3;
        case '8': return 7;
        case '9': return 6;
        case '0': return 6;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string num;
        cin >> num;
        int result = 0;
        for(int i = 0; i<num.size(); i++)
            result += countLeds(num[i]);
        cout << result << " leds" << endl;
    }
    return 0;
}
