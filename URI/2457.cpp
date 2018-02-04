#include <bits/stdc++.h>

using namespace std;

int main() {
    char let;
    char texto[1000];
    char *substrs;

    scanf(" %c %[^\n]s", &let, texto);

    substrs = strtok(texto, " ");

    double total = 0;
    double result = 0;

    while (substrs) {
        total++;

        for (int i = 0; substrs[i]; i++)
            if (substrs[i] == let) {
                result++;
                break;
            }

        substrs = strtok(NULL, " ");
    }

    cout << fixed << setprecision(1);
    cout << (result / total) * 100 << endl;

    return 0;
}
