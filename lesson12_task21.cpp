#include <iostream>

double Fib (int n) {
  if(n== 0){ 
    return 0;
  }
  
  if(n== 1|| n == 2) {
    return 1;
  } 
  
  return Fib(n-1) + Fib(n-2);
  
}

double factorial(int n ){
  if (n <= 1){
    return 1;
  }
  return n * factorial(n - 1);
}


int main() {
  int n;
  std::cin >> n ;

  double fibonachi = Fib(n);
  double fac = factorial(n);
  std::cout.precision(5) ;
  std::cout <<std::fixed << fac / fibonachi; 
}