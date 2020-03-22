#include <iostream>

using namespace std;

int main() {
    int size = 0;
    cin >> size;

    int vetor[size];
    for(int i = 0; i < size; i++)
        cin >> vetor[i];

    int menor = vetor[0];
    int var, indice = 0;

    for(var = 0; var < size; var++) {
        if(menor >= vetor[var]) { 
            menor = vetor[var];
            indice = var;
        }
    }
    cout << "Menor valor: "<< menor << endl ;
    cout << "Posicao: " << indice << endl;


    return 0;
}