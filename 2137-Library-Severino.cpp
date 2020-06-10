#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
     string nTestCases;

     while( getline(cin, nTestCases) && !nTestCases.empty() ){
          int count = stoi(nTestCases);

          string code;
          vector<string> bookCodes;
          for(int i = 0; i < count; i++){
               getline(cin, code);
               bookCodes.push_back(code);
          }
          sort(bookCodes.begin(), bookCodes.end());

          for(string &s : bookCodes)
               cout << s << endl;
	}
     return 0;
}