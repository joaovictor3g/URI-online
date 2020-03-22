#include <iostream>

using namespace std;

int main() {
    int vetor[3];
    for(int i = 0; i < 3; i++)
        cin >> vetor[i];
    
    int vet_aux[3];
    for(int i = 0; i < 3; i++)
        vet_aux[i] = vetor[i];

    bool ordenado = false;
    while(!ordenado) {
        ordenado = true;
        for(int i = 0; i < 2; i++) {
            if(vetor[i] > vetor[i+1]) {
                ordenado = false;
                swap(vetor[i], vetor[i+1]);
        
            }
        }
    }
    for(int i = 0; i < 3; i++) 
        cout << vetor[i] << endl;
    cout << endl;
    for(int i = 0; i < 3; i++) 
        cout << vet_aux[i] << endl;

    return 0;
}