#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
     double value;
     unsigned int hours, mins, secs;

	scanf("%lf", &value);

     hours = (int)(value/3600.0);
     value = value/3600.0 - hours;

     mins = (int)(value*60.0);
     value = value*60.0 - mins;

     secs = round(value*60.0);
     
     cout << hours << ":" << mins << ":" << secs << endl;

	return 0;
}