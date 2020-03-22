#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number = 0, qtd_horas = 0;
    double valor_por_hora = 0;
    cin >> number >> qtd_horas >> valor_por_hora;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << valor_por_hora*qtd_horas << endl;

    return 0;
}