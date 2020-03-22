#include <iostream>
#include <iomanip> 

using namespace std;
 
int main() {
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    
    int p1 = 2, p2 = 3, p3 = 5; 

    cout << fixed << setprecision(1);
    cout << "MEDIA = "<< (a*p1 + b*p2 + c*p3)/(p1+p2+p3)<< endl;

    return 0;
}