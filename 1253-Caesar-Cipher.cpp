#include <iostream>

using namespace std;

int main(){
     const char LETTER_A = 65, LETTER_Z = 90;
     int n;

     scanf("%d", &n);
     cin.ignore();

     while(  n-- > 0 ){
          string msg = "";
          int shift;

          getline(cin, msg);
          scanf("%d", &shift);
          cin.ignore();

          string newMsg = "";
          for(int i = 0; i < msg.size(); i++){
               char newLetter = msg[i] - (char)shift;
               
               if(newLetter < LETTER_A)
                    newLetter = LETTER_Z - (LETTER_A - newLetter) + 1;

               newMsg += newLetter;
          }
          cout << newMsg << endl;
     }
     return 0;
}