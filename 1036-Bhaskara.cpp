#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
     float a, b, c;

     scanf("%f %f %f", &a, &b, &c);
     float delta = pow(b,2)-(4*a*c);

     if(a == 0){
          cout << "Impossivel calcular" << endl;
     }
     else if(delta < 0){
          cout << "Impossivel calcular" << endl;
     }
     else{
          float root1 = ( b*(-1) + sqrt(delta) )/(2*a);
          float root2 = ( b*(-1) - sqrt(delta) )/(2*a);

          cout << "R1 = " << fixed << setprecision(5) <<  root1 << endl;
          cout << "R2 = " << fixed << setprecision(5) <<  root2 << endl;
     }
     return 0;
}