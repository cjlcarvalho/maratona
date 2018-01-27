#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, p;

    string s;

    cin >> t;

    while(t--) {
        cin >> n;
        cin.ignore();
        p = 0;
        int mat[n][2];
        for (int i = 0; i < n; i++) {
            getline(cin, s);
            if (s.find("LEFT") != string::npos) {
                mat[i][0] = 1;
                mat[i][1] = 0;
                p--;
            }
            else if (s.find("RIGHT") != string::npos) {
                mat[i][0] = 2;
                mat[i][1] = 0;
                p++;
            }
            else if(s.find("SAME AS") != string::npos) {
                mat[i][0] = 3;
                mat[i][1] = stoi(s.substr(8, s.size() - 8)) - 1;
                int j = i;
                while (mat[j][0] == 3 && j >= 0)
                    j = mat[j][1];
                if (mat[j][0] == 1)
                    p--;
                else if (mat[j][0] == 2)
                    p++;
            }
        }
        cout << p << endl;
    }

    return 0;
}
