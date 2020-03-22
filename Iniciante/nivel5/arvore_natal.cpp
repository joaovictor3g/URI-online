#include <iostream>
#define ALTURA 200
#define ALTURA_MAX 300
#define ESPESSURA 50
#define QTD_GALHOS 150

using namespace std;

string sim_ou_nao(int *medidas, int n) { 
    if((medidas[0] >= ALTURA && medidas[0] <= ALTURA_MAX) && medidas[1] >= ESPESSURA && medidas[2] >= QTD_GALHOS) {
        return "Sim";
    }
    return "Nao";

}

int main() {
    int n = 0;
    cin >> n;

    int medidas[n][3];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) 
            cin >> medidas[i][j];
        
    }
    for(int i = 0; i < n; i++)
        cout << sim_ou_nao(medidas[i], n) << endl;    

    return 0;
}