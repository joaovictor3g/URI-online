#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double s = 0, denominador = 2;
    
    for(int i = 3; i <= 39; i+=2) {
        s += i/denominador;
        denominador*=2;
    }
    cout << fixed << setprecision(2) << s + 1<< endl;
}