#include <iostream>
#include <assert.h>
#include <sstream>

using namespace std;

string removeLetters(string str){
     for(int i = 0; i < str.size(); i++){
          if(str[i] < 48 || str[i] > 57) 
               str.replace(i,1," ");
     }
     return str;
}

int main(){
     int n;

     scanf("%d", &n);
     cin.ignore();

     while(  n-- > 0 ){
          string num1, num2, num3;
          stringstream ss;
          string inputStr = "";
          getline(cin, inputStr);
          assert( !inputStr.empty() );
          ss << removeLetters(inputStr);
          ss >> num1;
          ss >> num2;
          ss >> num3;

          int result = stoi(num1) + stoi(num2) + stoi(num3);
          cout << result << endl;
     }
     return 0;
}