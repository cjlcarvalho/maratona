#include <iostream>

using namespace std;

int toInt(char c){
    return c - 48;
}

int sumString(string a, string b){
    int base = 1;
    int total = 0;
    int bpos = b.size() - 1;
    int apos = a.size() - 1;
    while(true){
        if(apos < 0 && bpos < 0)
            break;
        else if(apos < 0){
            int bint = toInt(b[bpos]);
            if(bint > 0)
                total += (toInt(b[bpos]) * base);
            bpos--;
        }
        else if(bpos < 0){
            int aint = toInt(a[apos]);
            if(aint > 0)
                total += (toInt(a[apos]) * base);
            apos--;
        }
        else {
            int aint = toInt(a[apos]);
            int bint = toInt(b[bpos]);
            if(aint > 0)
                total += (toInt(a[apos]) * base);
            if(bint > 0)
                total += (toInt(b[bpos]) * base);
            apos--;
            bpos--;
        }
        base *= 10;
    }
    return total;
}

string asStringSum(int num){
    string result;
    while(num > 0){
        if(num % 10)
            result.insert(result.begin(), (num % 10) + 48);
        num /= 10;
    }
    return result;
}

int main(){
    string a, b;
    while(cin >> a >> b){
        if(a == "0" && b == "0") break;
        cout << asStringSum(sumString(a, b)) << endl;
    }
    return 0;
}
