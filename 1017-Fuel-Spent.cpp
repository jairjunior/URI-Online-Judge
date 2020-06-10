#include <iostream>
#include <iomanip>

using namespace std;

int main() {
     const double consumption = 12.0;
     int time;
     int speed;
     
	scanf("%d", &time);
     scanf("%d", &speed);
	
     double fuel = (speed * time)/consumption;

	cout << fixed << setprecision(3) << fuel << endl;

	return 0;
}