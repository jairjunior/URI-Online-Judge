#include <iostream>
#include <sstream>
#include <assert.h>

using namespace std;

int main(){
     string inputStr;
     string rajesh = "";
     string sheldon = "";
     int n;

     scanf("%d", &n);
     cin.ignore();
	
	while(  n-- > 0 ){
          getline(cin, inputStr);
          assert( !inputStr.empty() );
          
		stringstream ss;
		ss << inputStr;
		ss >> rajesh;
		ss >> sheldon;

          if(rajesh.compare(sheldon) == 0)
               cout << "empate" << endl;
          else if(rajesh.compare("tesoura") == 0 && (sheldon.compare("papel") == 0 || sheldon.compare("lagarto") == 0))
               cout << "rajesh" << endl;
          else if(sheldon.compare("tesoura") == 0 && (rajesh.compare("papel") == 0 || rajesh.compare("lagarto") == 0))
               cout << "sheldon" << endl;
          else if(rajesh.compare("papel") == 0 && (sheldon.compare("pedra") == 0 || sheldon.compare("spock") == 0))
               cout << "rajesh" << endl;
          else if(sheldon.compare("papel") == 0 && (rajesh.compare("pedra") == 0 || rajesh.compare("spock") == 0))
               cout << "sheldon" << endl;
          else if(rajesh.compare("pedra") == 0 && (sheldon.compare("lagarto") == 0 || sheldon.compare("tesoura") == 0))
               cout << "rajesh" << endl;
          else if(sheldon.compare("pedra") == 0 && (rajesh.compare("lagarto") == 0 || rajesh.compare("tesoura") == 0))
               cout << "sheldon" << endl;
          else if(rajesh.compare("lagarto") == 0 && (sheldon.compare("spock") == 0 || sheldon.compare("papel") == 0))
               cout << "rajesh" << endl;
          else if(sheldon.compare("lagarto") == 0 && (rajesh.compare("spock") == 0 || rajesh.compare("papel") == 0))
               cout << "sheldon" << endl;
          else if(rajesh.compare("spock") == 0 && (sheldon.compare("tesoura") == 0 || sheldon.compare("pedra") == 0))
               cout << "rajesh" << endl;
          else if(sheldon.compare("spock") == 0 && (rajesh.compare("tesoura") == 0 || rajesh.compare("pedra") == 0))
               cout << "sheldon" << endl;
          else
               cout << "erro!" << endl;
     }
     return 0;
}