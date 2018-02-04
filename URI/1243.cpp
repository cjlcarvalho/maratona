#include <bits/stdc++.h>

using namespace std;

int main() {
    char frase[50];
    char atual[50];
    char *substrs;

    while (scanf(" %[^\n]s", frase) != EOF) {
        strcpy(atual, frase);
        substrs = strtok(frase, " .0123456789");
        int total = 0, acc = 0;
        while (substrs != NULL) {
            total++;
            acc += strlen(substrs);
            strcpy(atual, substrs);
            substrs = strtok(NULL, " .0123456789");
            if (substrs && !strcmp(atual, substrs))
                break;
        }
        if (total == 0) cout << 250 << endl;
        else if (acc / total >= 6) cout << 1000 << endl;
        else if (acc / total >= 4) cout << 500 << endl;
        else cout << 250 << endl;
    }

    return 0;
}
