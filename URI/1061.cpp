#include <iostream>

using namespace std;

int main(){
    string dia;
    int d1, d2, h1, h2, m1, m2, s1, s2;
    char p;
    
    cin >> dia >> d1 >> h1 >> p >> m1 >> p >> s1;
    cin >> dia >> d2 >> h2 >> p >> m2 >> p >> s2;
    
    int d3, h3, m3, s3;
    
    d3 = h3 = m3 = s3 = 0;
    
    if(s1 > s2){
        s3 = (60 + s2) - s1;
        m3 -= 1;
    }
    else
        s3 = s2 - s1;
    
    if(m1 > m2){
        m3 += (60 + m2) - m1;
        h3 -= 1;
    }    
    else
        m3 += (m2 - m1);
        
    if(m3 < 0){
        m3 = 60 + m3;
        h3 -= 1;
    }
    
    if(h1 > h2){
        h3 += (24 + h2) - h1;
        d3 -= 1;
    }
    else
        h3 += (h2 - h1);
    
    if(h3 < 0){
        h3 = 24 + h3;
        d3 -= 1;
    }
        
    d3 += (d2 - d1);
    
    cout << d3 << " dia(s)" << endl;
    cout << h3 << " hora(s)" << endl;
    cout << m3 << " minuto(s)" << endl;
    cout << s3 << " segundo(s)" << endl;
    return 0;
}

