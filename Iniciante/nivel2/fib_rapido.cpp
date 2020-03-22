#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    double raiz_de_5 = sqrt(5); 

    cout << fixed << setprecision(1);
    cout << (pow(((1+raiz_de_5)/2), n) - pow(((1-raiz_de_5)/2), n))/raiz_de_5 << endl;

    return 0;
}