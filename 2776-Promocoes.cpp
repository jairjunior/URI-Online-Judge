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

          //cout << "Qtd de promocoes: " << nPromo << endl;
          //cout << "Qtd de latas: " << nBottles << endl;

          int promocoes[nPromo][3];
          for(int i = 0; i < nPromo; i++){
               string promo;
               stringstream s_promo;
               
               getline(cin, promo);
               s_promo << promo;
               s_promo >> promocoes[i][0];        //Save input Q
               s_promo >> promocoes[i][1];        //Save input V

               //Calculates the amount of money earned in each promotion
               promocoes[i][2] = (int)(nBottles/promocoes[i][0]);
               promocoes[i][2] *= promocoes[i][1];
          }
          /*cout << "Promocoes:" << endl;
          for(int i = 0; i < nPromo; i++)
               cout << promocoes[i][0] << " " << promocoes[i][1] << endl;
          cout << "Fim do Test Case!" << endl;*/

          int max = 0;
          for(int i = 0; i < nPromo; i++){
               if(promocoes[i][2] > max)
                    max = promocoes[i][2];
          }
          cout << max << endl;
     }
     return 0;
}