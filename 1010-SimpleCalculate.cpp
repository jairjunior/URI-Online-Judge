#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


int main() {
	string str, prdct1, prdct2;
	unsigned int qtt1, qtt2;
     double price1, price2;
	
	stringstream ss;
	while( getline(cin, str) && !str.empty() )
		ss << str << " ";
	
	ss >> prdct1 >> qtt1 >> price1 >> prdct2 >> qtt2 >> price2;
	
	double totalToPay = qtt1*price1 + qtt2*price2;
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalToPay << endl;
	
	return 0;
}