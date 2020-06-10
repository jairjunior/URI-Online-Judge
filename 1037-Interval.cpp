#include <iostream>
#include <iomanip>

using namespace std;

int main() {
     double value;

	scanf("%lf", &value);
     
     if(value >= 0 && value <= 25.0)
          cout << "Intervalo [0,25]" << endl;
     else if(value > 25.0 && value <= 50.0)
          cout << "Intervalo (25,50]" << endl;
     else if(value > 50.0 && value <= 75.0)
          cout << "Intervalo (50,75]" << endl;
     else if(value > 75.0 && value <= 100.0)
          cout << "Intervalo (75,100]" << endl;
     else
          cout << "Fora de intervalo" << endl;

	return 0;
}