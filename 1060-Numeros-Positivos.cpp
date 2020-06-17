#include <iostream>

using namespace std;

int main(){
  float nums[6];
  const int N = 6;

     for(int i = 0; i < N; i++){
          scanf("%f", &nums[i]);
     }

     int posNumbers = 0;
     for(int i = 0; i < N; i++){
          if(nums[i] > 0) posNumbers++;
     }
     cout << posNumbers << " valores positivos" << endl;
     return 0;
}