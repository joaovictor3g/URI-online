#include <iostream>
#include <iomanip> 

using namespace std;
 
double soma_linha_matriz(double *matriz, double soma_pesos) {
    double soma = 0;
    for(int i = 0; i < 3; i++)
        soma+=matriz[i];
    
    return soma/soma_pesos;  
} 
 
int main() {
    int n = 0;
    cin >> n;
    
    double matriz[n][3];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) 
            cin >> matriz[i][j];
    }
    
    double vetor_pesos[3]{2, 3, 5};
    
    double soma_pesos = 0;
    
    for(int i = 0; i < 3; i++)
        soma_pesos += vetor_pesos[i];
        
    cout << fixed << setprecision(1);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            matriz[i][j] *= vetor_pesos[j];               
        }
        cout << soma_linha_matriz(matriz[i], soma_pesos) << endl;
    }

    return 0;
}