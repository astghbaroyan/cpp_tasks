#include <iostream>

int main() 
{
  const int n = 21;
  char s1[n];
  char s2[n]; 
  std::cin >> s1 >> s2;
  int count1 = 0;
  while(s2[count1] != '\0'){
    ++count1;
  }
  int count = 0;
  while(s1[count] != '\0'){
    ++count;
  }
  bool t = false;
  int count2 = 0;
  int i = 0;
  for(int k = 0; k < count ; ++k){
    while(s2[0] != s1[i] && i < count){
      ++i;
    }
    for(int j = 0; j < count1 ; ++j){
      t = false;
      if(s2[j] == s1[i + j]){
        ++count2;
        t = true;
        if(count2 == count1){
          break;
        }
      }
    }
    if(count2 == count1){
          break;
    }
  
  }
if(count2 == count1 && t){
      std::cout << "YES";
    }else {
      std::cout << "NO";
    }
}