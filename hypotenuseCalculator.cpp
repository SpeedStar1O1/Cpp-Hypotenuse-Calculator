#include <iostream>
#include <cmath>
using namespace std;

int main(){


    double a;
    double b;
    double c;

    cout << "Enter side a: "; 
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2)); // making same math function in less lines of code
    /*
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    */
    cout << "Side c: " << c;


    return 0;
}