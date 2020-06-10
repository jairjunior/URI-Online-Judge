#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


int main() {
	string str, name = "";
	double salary = 0, sales = 0;
	
	stringstream ss;
	while( getline(cin, str) && !str.empty() )
		ss << str << " ";
	
	ss >> name >> salary >> sales;
	
	double salesCommission = sales * 0.150;
	double finalSalary = salesCommission + salary;
	
	cout << "TOTAL = R$ " << fixed << setprecision(2) << finalSalary << endl;
	
	return 0;
}