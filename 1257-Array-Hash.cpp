#include <iostream>
#include <assert.h>
#include <vector>

using namespace std;

int main(){
     int n;

     scanf("%d", &n);
     cin.ignore();

     while(  n-- > 0 ){
          vector<string> strs;
          int nLines;

          //Get the number of lines in this test case
          scanf("%d", &nLines);
          cin.ignore();

          //Read nLines from input
          for(int i = 0; i < nLines; i++){
             string inputStr;
               getline(cin, inputStr);
               assert( !inputStr.empty() );
               strs.push_back(inputStr);
          }

          //Calculate hash
          int hash = 0;
          for(int i = 0; i < nLines; i++){
               for(int j = 0; j < strs[i].size(); j++){
                    hash += (int)strs[i][j] - 65 + i + j;
               }
          }
          //Print out hash result
          cout << hash << endl;
	}
     return 0;
}