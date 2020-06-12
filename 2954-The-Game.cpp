#include <iostream>
#include <assert.h>
#include <string>
#include <cstring>
#include <algorithm>


using namespace std;

struct index_t{
     size_t first;       //first letter of the word found
     size_t end;         //end of the string (last position)
     size_t next;        //position of the next search
};


//Find the index of the first occurrence of the given words
bool findWords(string str, index_t *index){
     string tests[] = {" jogo ", " jogo.", " jogo,", " perdi ", " perdi.", " perdi,"};
     int n = 6;
     size_t nextSearch, firstPos = index->end;

     for(int i = 0; i < n; i++){
          size_t pos = str.find( tests[i], index->next );
          if(pos != std::string::npos && pos < firstPos){
               firstPos = pos;
               nextSearch = pos + tests[i].length();
          }
     }
     if(firstPos < index->end){
          index->first = firstPos;
          index->next = nextSearch;
          return true;
     }
     return false;
}


int countChar(string str, size_t begin, size_t end){
     int counter = 0;

     if(begin < end){
          for(int i = begin; i < end; i++){
               if(str[i] != ' ' && str[i] != '.' && str[i] != ',')
                    counter++;
          }
     }
     return counter;
}



int main(){
     int n;
     index_t *index = (index_t *)malloc( sizeof(index_t) );

     scanf("%d", &n);
     cin.ignore();

     while( n-- > 0 ){
          string str = "";
          int maxPoints = 0;

          //Get input string
          getline(cin, str);
          assert( !str.empty() );

          //Transform the input into lowercase text
          transform(str.begin(), str.end(), str.begin(), ::tolower);
          //cout << str << endl;

          index->first = 0;
          index->end = str.length();
          index->next = 0;
          
          bool found = true;
          while( found ){
               size_t last = index->next;

               found = findWords(str, index);

               //cout << "Found: " << found << " - First: " << index->first << " - Next: " << index->next << endl;

               int counter = 0;
               if(found)
                    counter = countChar(str, last, index->next);
               else 
                    counter = countChar(str, last, index->end);
               
               //cout << "Counter: " << counter << endl;
               
               if(counter > maxPoints)
                    maxPoints = counter;
          }
          cout << maxPoints << endl;
     }
     return 0;
}