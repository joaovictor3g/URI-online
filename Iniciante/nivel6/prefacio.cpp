#include <iostream>

using namespace std;

int main() {
    int divisor = 0, dividendo = 0;
    cin >> dividendo >> divisor; 

    if(dividendo < 0) {
        int aux = dividendo;
        while(dividendo % divisor != 0)
            dividendo--;
        
        int quociente = (dividendo + dividendo % divisor ) / divisor;
        int resto = aux - (dividendo);

        cout << quociente << " " << resto << endl;

        return 0;
    }
    cout << dividendo / divisor << " "<< dividendo%divisor << endl;


    return 0;
}