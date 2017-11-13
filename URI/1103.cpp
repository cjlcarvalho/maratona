#include <bits/stdc++.h>

using namespace std;

int main(){
   int h1, m1, h2, m2;
   while(cin >> h1 >> m1 >> h2 >> m2){
        if(!h1 && !m1 && !h2 && !m2) break;
        int result = 0;
        if(h2 > h1){
            result += (h2 - h1) * 60;
            if(m2 >= m1)
                result += m2 - m1;
            else{
                result -= 60;
                result += 60 + (m2 - m1);
            }
        }
        else if(h2 == h1){
            if(m2 >= m1)
                result += m2 - m1;
            else
                result += 1440 + (m2 - m1);
        }
        else{
            result += (24 + (h2 - h1)) * 60;
            if(m2 >= m1)
                result += m2 - m1;
            else{
                result -= 60;
                result += 60 + (m2 - m1);
            }
        }
        cout << result << endl;
   }
   return 0;
}
