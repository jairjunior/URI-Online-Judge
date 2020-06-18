#include <iostream>
#include <assert.h>
 
using namespace std;
 
int main() {
     int num;
     const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

     scanf("%d", &num);
     assert(num >= 1 && num <= 12);
 
     cout << months[num-1] << endl;

     return 0;
}