#include <bits/stdc++.h>

using namespace std;

void mount(map<string, string>& m){
    // brute force maroto
    m["brasil"] = "Feliz Natal!";
    m["alemanha"] = "Frohliche Weihnachten!";
    m["austria"]            = "Frohe Weihnacht!";
    m["coreia"]             = "Chuk Sung Tan!";
    m["espanha"]            = "Feliz Navidad!";
    m["grecia"]             = "Kala Christougena!";
    m["estados-unidos"]     = "Merry Christmas!";
    m["inglaterra"]         = "Merry Christmas!";
    m["australia"]          = "Merry Christmas!";
    m["portugal"]           = "Feliz Natal!";
    m["suecia"]             = "God Jul!";
    m["turquia"]            = "Mutlu Noeller";
    m["argentina"]          = "Feliz Navidad!";
    m["chile"]              = "Feliz Navidad!";
    m["mexico"]             = "Feliz Navidad!";
    m["antardida"]          = "Merry Christmas!";
    m["canada"]             = "Merry Christmas!";
    m["irlanda"]            = "Nollaig Shona Dhuit!";
    m["belgica"]            = "Zalig Kerstfeest!";
    m["italia"]             = "Buon Natale!";
    m["libia"]             =  "Buon Natale!";
    m["siria"]              = "Milad Mubarak!";
    m["marrocos"]           = "Milad Mubarak!";
    m["japao"]              = "Merii Kurisumasu!";

}

int main(){
    map<string, string> m;
    mount(m);
    string s;
    while(getline(cin, s)){
        if(!m.count(s))
            cout << "--- NOT FOUND ---" << endl;
        else
            cout << m[s] << endl;
    }
    return 0;
}
