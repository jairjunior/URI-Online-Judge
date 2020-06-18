#include <iostream>
#include <iomanip>
#include <algorithm>
 
using namespace std;


int main() {
  double arr[3];
  int n = sizeof(arr)/sizeof(arr[0]);

     scanf("%lf %lf %lf", &arr[0], &arr[1], &arr[2]);
     double p = arr[0] + arr[1] + arr[2];
     double a = ((arr[0] + arr[1]) * arr[2]) / 2.0 ;
     
     sort(arr, arr+n);
     if(arr[0] + arr[1] > arr[2])
          cout << "Perimetro = " << fixed << setprecision(1) << p << endl;
     else
          cout << "Area = " << fixed << setprecision(1) << a << endl;

     return 0;
}