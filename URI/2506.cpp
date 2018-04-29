#include <bits/stdc++.h>

using namespace std;

struct Paciente
{
    int h;
    int m;
    int c;
};

int main()
{
    int n;

    while (cin >> n) {
        int a, b, c;
        int result = 0;
        queue<Paciente> q;

        while (n--) {
            cin >> a >> b >> c;
            
            if (q.empty())
                q.push({a, b, c});
            else {
                Paciente p = q.front();
                q.pop();

                int h = ((p.m + 30) >= 60) ? p.h + 1 : p.h;
                int m = ((p.m + 30) % 60);

                int ht = ((b + c) >= 60) ? a + 1 : a;
                int mt = ((b + c) % 60);

                if (h == ht && m >= mt)
                    result++;
                else if (h > ht)
                    result++;

                q.push({a, b, c});
            }
        }

        cout << result << endl;
    }
    
    return 0;
}
