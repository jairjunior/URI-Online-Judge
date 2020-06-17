#include <iostream>

using namespace std;

int indexOf(const int *arr, const int n, int val){
     int i = 0;
     while(arr[i] != val && i < n) i++;
     return i;
}


int main(){
     const int N = 8;
     const int ddds[] = {61, 71, 11, 21, 32, 19, 27, 31};
     const string cidades[] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
     int inputDDD;

     scanf("%d", &inputDDD);
     int index = indexOf(ddds, N, inputDDD);
     
     if(index >= N)
          cout << "DDD nao cadastrado" << endl;
     else
          cout << cidades[index] << endl;
          
     return 0;
}