#include <iostream>

using namespace std;

int main(){
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/10;
    printf("Media: %.1f\n", media);
    if(media >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if(media >= 5.0){
        cout << "Aluno em exame." << endl;
        double exame;
        cin >> exame;
        double nmedia = (exame + media)/2;
        printf("Nota do exame: %.1f\n", exame);
        if(nmedia >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        printf("Media final: %.1f\n", nmedia);
    }
    else{
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}
