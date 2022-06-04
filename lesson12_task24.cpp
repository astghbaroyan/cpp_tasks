#include <iostream>

double rec(unsigned long i){
  if(i <= 3 ){
    return i;
  } 
  else{
    if(i % 2 == 0){
      return 3 + rec(i / 2);
    } else {
      return 2 * rec(i + 3);
    }
  }
}

int main() {
  unsigned long i;
  std::cin >> i ;
  double result = rec(i);
  std::cout << result;
}