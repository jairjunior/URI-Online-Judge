#include <iostream>
#include <sstream>

using namespace std;

int main(){
  string str;

     while( getline(cin, str) && !str.empty() ){
          stringstream ss;
          int nPromo, nBottles;
		ss << str;
          ss >> nPromo;
          ss >> nBottles;

          cout << "Qtd de promocoes: " << nPromo << endl;
          cout << "Qtd de latas: " << nBottles << endl;

          int promocoes[nPromo][2];
          for(int i = 0; i < nPromo; i++){
               string promo;
               stringstream s_promo;
               
               getline(cin, promo);
               s_promo << promo;

               s_promo >> promocoes[i][0];
               s_promo >> promocoes[i][1];
          }
          /*cout << "Promocoes:" << endl;
          for(int i = 0; i < nPromo; i++)
               cout << promocoes[i][0] << " " << promocoes[i][1] << endl;
          cout << "Fim do Test Case!" << endl;*/

          //AGORA NECESSITA FAZER O CALCULO COM OS VALORES JÁ OBTIDOS

     }
     return 0;
}