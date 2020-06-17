#include <iostream>
#include <iomanip>

using namespace std;

int main(){
     float n1, n2, n3, n4, media, exame, novaMedia;

     scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

     media = (n1*2.0 + n2*3.0 + n3*4.0 + n4)/10.0;
     cout << fixed << setprecision(1) << "Media: " << media << endl;
     if(media >= 7.0)
          cout << "Aluno aprovado." << endl;
     else if(media < 5.0)
          cout << "Aluno reprovado." << endl;
     else{
          cout << "Aluno em exame." << endl;
          scanf("%f", &exame);
          cout << "Nota do exame: " << exame << endl;
          novaMedia = (media + exame)/2.0;
          if(novaMedia >= 5.0)
               cout << "Aluno aprovado." << endl;
          else
               cout << "Aluno reprovado." << endl;
          cout << "Media final: " << novaMedia << endl;
     }
     return 0;
}