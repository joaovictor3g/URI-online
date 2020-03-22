#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int fant = 1, fpos = 0, fant_ant = 0;
    cout << fpos << " ";

    for(int i = 1; i < n; i++) {
        fpos = fant + fant_ant;
        fant = fant_ant;  
        fant_ant = fpos;
        
        if(i == n-1) {
            cout << fpos << endl;
            return 0;
        }
        cout << fpos << " ";
    }

    return 0;
}