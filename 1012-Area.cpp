#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
     const double pi = 3.14159;
     double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);
	
	double triangleArea = (a*c)/2.0;
     double circleArea = pi * pow(c, 2.0);
     double trapArea = (a + b)*c / 2.0;
     double squareArea = pow(b, 2.0);
     double rectArea = a*b;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << triangleArea << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << circleArea << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << trapArea << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << squareArea << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << rectArea << endl;
	
	return 0;
}