#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int time11, time12, time21, time22;
        scanf(" %d x %d", &time11, &time21);
        scanf(" %d x %d", &time22, &time12);
        if((time11 > time21 && time12 > time22) || (time11 > time21 && time12 == time22) || (time11 == time21 && time12 > time22))
            cout << "Time 1" << endl;
        else if((time21 > time11 && time22 > time12) || (time21 > time11 && time12 == time22) || (time11 == time21 && time22 > time12))
            cout << "Time 2" << endl;
        else {
            int gols1 = (time11 + time12) - (time21 + time22);
            int gols2 = (time21 + time22) - (time11 + time12);
            if(gols1 > gols2)
                cout << "Time 1" << endl;
            else if(gols2 > gols1)
                cout << "Time 2" << endl;
            else {
                if(time12 > time21)
                    cout << "Time 1" << endl;
                else if(time21 > time12)
                    cout << "Time 2" << endl;
                else
                    cout << "Penaltis" << endl;
            }
        }
    }
    return 0;
}
