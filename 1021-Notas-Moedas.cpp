#include <iostream>
#include <math.h>

using namespace std;

int main(){
     float valor;
     int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;
     int coins_1, coins_50, coins_25, coins_10, coins_5, coins_01;

     scanf("%f", &valor);

     int reais = (int)valor;
     int cents = round( (int)((valor - reais)*1000.0)/10.0 );

     cout << "Reais: " << reais << endl;
     cout << "Cents: " << cents << endl;

     if(valor > 0 && valor < 1000000.00){
          notas_100 = reais/100;
          notas_50 = (reais % 100)/50;
          notas_20 = (reais % 100 % 50)/20;
          notas_10 = (reais % 100 % 50 % 20)/10;
          notas_5 = (reais % 100 % 50 % 20 % 10)/5;
          notas_2 = (reais % 100 % 50 % 20 % 10 % 5)/2;

          coins_1 = (reais % 100 % 50 % 20 % 10 % 5 % 2);
          coins_50 = (cents % 100)/50;
          coins_25 = (cents % 100 % 50)/25;
          coins_10 = (cents % 100 % 50 % 25)/10;
          coins_5 = (cents % 100 % 50 % 25 % 10)/5;
          coins_01 = (cents % 100 % 50 % 25 % 10 % 5);
     }

     cout << "NOTAS:" << endl;
     cout << notas_100 << " nota(s) de R$ 100.00" << endl;
     cout << notas_50 << " nota(s) de R$ 50.00" << endl;
     cout << notas_20 << " nota(s) de R$ 20.00"  << endl;
     cout << notas_10 << " nota(s) de R$ 10.00" << endl;
     cout << notas_5 << " nota(s) de R$ 5.00" << endl;
     cout << notas_2 << " nota(s) de R$ 2.00" << endl;

     cout << "MOEDAS:" << endl;
     cout << coins_1 << " moeda(s) de R$ 1.00" << endl;
     cout << coins_50 << " moeda(s) de R$ 0.50" << endl;
     cout << coins_25 << " moeda(s) de R$ 0.25" << endl;
     cout << coins_10 << " moeda(s) de R$ 0.10" << endl;
     cout << coins_5 << " moeda(s) de R$ 0.05" << endl;
     cout << coins_01 << " moeda(s) de R$ 0.01" << endl;

     return 0;
}