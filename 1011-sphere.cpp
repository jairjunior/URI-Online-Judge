#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
     const double pi = 3.14159;
     double radius;
     
     scanf("%lf", &radius);

	double sphereVol = 4/3.0 * pi * pow(radius, 3);
	
	cout << "VOLUME = " << fixed << setprecision(3) << sphereVol << endl;
	
	return 0;
}