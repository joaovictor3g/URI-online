#include <iostream>

using namespace std;

long long unsigned int fib(int number) {
     if(number == 0 || number == 1)
        return number;

    long long unsigned int fant = 1, fpos = 0, fant_ant = 0;
    for(int i = 0; i < number; i++) {
        fpos = fant + fant_ant;
        fant = fant_ant;  
        fant_ant = fpos;
        
    }
    return fpos;
}

int main() {
    int n = 0;
    cin >> n;

    long long unsigned int vetor[n];

    for(int i = 0; i < n; i++)
        cin >> vetor[i];

    for(int i = 0; i < n; i++) 
        cout << "Fib(" <<vetor[i] << ") = " << fib(vetor[i]) << endl;
    
    return 0;
}