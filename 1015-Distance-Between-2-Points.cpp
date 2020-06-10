#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
     double x1, x2, y1, y2;

	scanf("%lf %lf", &x1, &y1);
     scanf("%lf %lf", &x2, &y2);
	
     double dist = sqrt( pow(x2-x1 , 2) + pow(y2-y1 , 2.0) );
	
	cout << fixed << setprecision(4) << dist << endl;
	
	return 0;
}