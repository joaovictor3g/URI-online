#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 3.14159, area = 0.0;
    double raio = 0.0;

    cin >> raio;
    area = pi * raio * raio;
    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}