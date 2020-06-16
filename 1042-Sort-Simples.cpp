#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a, b, c;
  int arr[3];
  int size = sizeof(arr)/sizeof(arr[0]);

     scanf("%d %d %d", &a, &b, &c);

     arr[0] = a;
     arr[1] = b;
     arr[2] = c;

     sort(arr, arr+size);

     cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << endl;
     cout << a << endl << b << endl << c << endl;    

     return 0;
}