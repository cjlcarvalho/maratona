#include <bits/stdc++.h>

using namespace std;

struct Vaga
{
    int car;
    int tam;
};

int main()
{
    int tam, n;
    char c;
    int car, t;

    while (cin >> tam >> n) {
        int result = 0;
        list<Vaga> cars;
        
        for (int i = 0; i < n; i++) {
            cin >> c >> car;

            if (c == 'C') {
                cin >> t;
                if ((tam - t) >= 0) {
                    cars.push_back({car, t});
                    tam -= t;
                    result += 10;
                }
            }
            else if (c == 'S') {
                for (auto it = cars.begin(); it != cars.end(); it++) {
                    if ((*it).car == car) {
                        tam += (*it).tam;
                        cars.erase(it);
                        break;
                    }
                }
            }
        }

        cout << result << endl;

    }

    return 0;
}
