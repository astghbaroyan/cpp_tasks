#include <iostream>

int main() 
{
  const int n = 21;
  char word[n];
  char s; 
  std::cin >> word >> s;
  int count = 0;
  while(word[count] != '\0'){
    ++count;
   }
  word[count + 1] = '\0';
  int i = 0;
  while(word[i] != s && i < count){
    ++i;
   }
  
  for( int a = i + 1 ; a < count ; ++a ){
    std::cout << word[a];
   }
}