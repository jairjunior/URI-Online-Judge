#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
     const double vx = 60.0;
     const double vy = 90.0;
     const double diff = vy-vx;
     int dist;
     
	scanf("%d", &dist);
	
     double t = round( (  dist/diff ) * 60.0 );

	cout << t << " minutos" << endl;
	
	return 0;
}