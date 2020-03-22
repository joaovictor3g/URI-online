#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    double salario = 0, bonus = 0;
    cin >> nome >> salario >> bonus;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << salario + 0.15*bonus << endl; 
    return 0;
}