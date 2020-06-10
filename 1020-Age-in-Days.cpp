#include <iostream>
#include <iomanip>

using namespace std;

int main() {
     unsigned int age, years, months, days;

	scanf("%u", &age);

     years = (int)(age/365);
     months = (int)(age % 365/30);
     days = (age % 365) % 30;
     
     cout << years << " ano(s)\n";
     cout << months << " mes(es)\n";
     cout << days << " dia(s)" << endl;

	return 0;
}