#include <iostream>
#include <assert.h>

using namespace std;


int main(){
  string inputStr = "";
     
     getline(cin, inputStr);
     assert( !inputStr.empty() );

     if(inputStr.length() <= 140)
          cout << "TWEET" << endl;
     else
          cout << "MUTE" << endl;

     return 0;
}
