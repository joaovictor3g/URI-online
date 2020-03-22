#include <iostream>
#include <iomanip> 

using namespace std;
 
int main() {
    double a = 0, b = 0;
    cin >> a >> b;
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = "<< (a*3.5 + b*7.5)/(11)<< endl;

    return 0;
}