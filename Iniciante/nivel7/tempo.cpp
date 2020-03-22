#include <iostream>

using namespace std;

int main() {
    int hora_inicial = 0, min_inicial = 0, hora_final = 0, min_final = 0;
    cin >> hora_inicial>> min_inicial >> hora_final >> min_final;

    int hora_aux = hora_final - hora_inicial;
    int min_aux = min_final - min_inicial;

    if(hora_aux == 0 && min_aux == 0) {
        hora_aux+=24;
        cout << "O JOGO DUROU "<< hora_aux<<" HORA(S) E 0 MINUTO(S)" << endl;

    
    }else if(min_aux == 0) 
        cout << "O JOGO DUROU " << hora_aux << " HORA(S) E 0 MINUTO(S)" << endl;

    else if(hora_aux == 0) {
        hora_aux+=24;
        if(min_aux<0) {
            min_aux = 60-min_inicial+min_final;
            hora_aux--;

        }else if(min_aux > 0)
            return 0;
            
        cout << "O JOGO DUROU " << hora_aux << " HORA(S) E "<< min_aux<<" MINUTO(S)" << endl;  

    }else if(hora_aux >= 1) { 
        if(min_aux<0) {
            min_aux=60-min_inicial+ min_final;
            hora_aux--;
        }
        cout << "O JOGO DUROU " << hora_aux<< " HORA(S) E "<< min_aux << " MINUTO(S)" << endl; 
    
    }else 
        cout << "O JOGO DUROU " << hora_aux << " HORA(S) E " << min_aux << " MINUTO(S)" << endl;
    
    return 0;
}