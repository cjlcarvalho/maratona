#include <bits/stdc++.h>

using namespace std;

int main()
{
    string exp;

    while (getline(cin, exp)) {
        if (exp == ".") break;

        map<string, string> mp;

        unsigned int size = exp.size();
        for (unsigned int i = 0; i < size; i++) {
            unsigned int j = i;
            while (exp[j] != ' ' && j < size)
                j++;
            if ((j - i) > 2) {
                if (!mp.count(string({exp[i]}) + ".")) {
                    mp[string({exp[i]}) + "."] = exp.substr(i, j - i);

                    for (unsigned int l = i + 1; l < j; l++) {
                        exp.erase(exp.begin() + (i + 1));
                        size--;
                    }
                    exp.insert(exp.begin() + (i + 1), '.');
                    size++;
                    j = i + 1;
                }
                else if (mp[string({exp[i]}) + "."].size() < exp.substr(i, j - i)){
                    for (unsigned int l = i; l >= 0; l++) {
                        if (exp[l] == exp[i]) {
                            string temp = exp.substr(i, j - i);
                            exp.erase(exp.begin() + (l + 1));
                            exp.insert(exp.begin() + (l + 1), mp[string({exp[i]}) + "."]);
                            size += mp[string({exp[i]}) + "."].size() - 1;
                            i += mp[string({exp[i]}) + "."].size() - 1;

                            mp[string({exp[i]}) + "."] = temp;

                            for (unsigned int k = i + 1; k < j; k++) {
                                exp.erase(exp.begin() + (i + 1));
                                size--;
                            }
                            exp.insert(exp.begin() + (i + 1), '.');
                            size++;
                            j = i + 1;
                        }
                    }
                }
            }
            i = j;
        }

        cout << exp << endl;
        cout << mp.size() << endl;
        for (auto it = mp.begin(); it != mp.end(); it++)
            cout << (*it).first << " = " << (*it).second << endl;
    }
    return 0;
}
