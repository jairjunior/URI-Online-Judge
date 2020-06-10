#include <iostream>
#include <iomanip>

using namespace std;


int main() {
     int arr[3];

	scanf("%d %ld %d", &arr[0], &arr[1], &arr[2]);
	
     int test = 0;
     for(int i = 0; i < 3; i++){
          if(arr[i] > test)
               test = arr[i];
     }
	
	cout << fixed << setprecision(3) << test << " eh o maior" << endl;
	
	return 0;
}