#include <iostream>

using namespace std;

int main() {
    int vetor[3];
    for(int i = 0; i < 3; i++)
        cin >> vetor[i];
    
    int idade = vetor[0] - (vetor[1] + vetor[2]);
    for(int i = 1; i < 3; i++) {
        if(idade <= vetor[i])
            idade = vetor[i];
    }
    
    cout << idade << endl;

    return 0;
}