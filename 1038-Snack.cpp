#include <iostream>
#include <iomanip>

using namespace std;

int main(){
     int x, y;
     const float prices[] = {4.0, 4.5, 5.0, 2.0, 1.5};

     scanf("%d %d", &x, &y);
     cout << "Total: R$ " << fixed << setprecision(2) <<  prices[x-1]*y << endl;

     return 0;
}
