#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cin >> n1 >> n2 >> n3 >> n4;

    double media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout << fixed << setprecision(1);
    cout << "Media: "<< media << endl;
    if(media >= 7)
        cout << "Aluno aprovado." << endl;
    else if(media < 5)
        cout << "Aluno reprovado." << endl;
    
    else {
        double nota_exame = 0;
        cout << "Aluno em exame."<< endl;
        cin >> nota_exame;   

        cout << "Nota do exame: " <<nota_exame << endl;
        double nova_media = (nota_exame+media)/2;

        if(nova_media >= 5) {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << nova_media << endl;
        
        }else{
            cout << "Aluno reprovado." << endl;
            cout << "Media final: "<< nova_media << endl;
        }
        
    }

    return 0;
}