#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 

using namespace std;

struct Complex {
    double real;
    double imag;
};

//Vo Hoai Nam 20204592
Complex operator + (Complex a, Complex b) {
    /*****************/
    Complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;
    return temp;
    /*****************/
}
//Vo Hoai Nam 20204592
Complex operator - (Complex a, Complex b) {
    /*****************/
    Complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;
    return temp;
    /*****************/
}
//Vo Hoai Nam 20204592
Complex operator * (Complex a, Complex b) {
    /*****************/
    Complex temp;
    temp.real = a.real * b.real - a.imag * b.imag;
    temp.imag = a.imag * b.real + b.imag * a.real;
    return temp;;
    /*****************/
}
//Vo Hoai Nam 20204592
Complex operator / (Complex a, Complex b) {
    /*****************/
    Complex tmpC;
    Complex inverse;
    inverse.real = b.real;
    inverse.imag = -b.imag;

    tmpC = a * inverse;
    tmpC.real = tmpC.real / (b.real * b.real + b.imag * b.imag);
    tmpC.imag = tmpC.imag / (b.real * b.real + b.imag * b.imag);
    return tmpC;
    /*****************/
}

//Vo Hoai Nam 20204592
ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}
//Vo Hoai Nam 20204592
int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;
    
    Complex a{real_a, img_a};
    Complex b{real_b, img_b};
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}