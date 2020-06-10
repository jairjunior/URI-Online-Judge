#include <iostream>
#include <iomanip>

using namespace std;

int main() {
     unsigned int value;
     unsigned int qty100, qty50, qty20, qty10, qty5, qty2, qty1;

	scanf("%u", &value);
	cout << value << endl;

     qty100 = (int)(value/100.0);
     value -= qty100*100;

     qty50 = (int)(value/50.0);
     value -= qty50*50;
     
     qty20 = (int)(value/20.0);
     value -= qty20*20;
     
     qty10 = (int)(value/10.0);
     value -= qty10*10;
     
     qty5 = (int)(value/5.0);
     value -= qty5*5;
     
     qty2 = (int)(value/2.0);
     value -= qty2*2;

     qty1 = value;
     
     cout << qty100 << " nota(s) de R$ 100,00" << endl;
     cout << qty50  << " nota(s) de R$ 50,00" << endl;
     cout << qty20  << " nota(s) de R$ 20,00" << endl;
     cout << qty10  << " nota(s) de R$ 10,00" << endl;
     cout << qty5   << " nota(s) de R$ 5,00" << endl;
     cout << qty2   << " nota(s) de R$ 2,00" << endl;
     cout << qty1   << " nota(s) de R$ 1,00" << endl;

	return 0;
}