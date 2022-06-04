#include <iostream>

double chib(int n, double x){
  if(n == 0 ){
    return 1;
  }
  if(n == 1 ){
    return x;
  }
  return 2 * x * chib( n-1, x) - chib(n-2, x);
}
int main() 
{
  int n;
  double x;
  std::cin >> n >> x;

  double result = chib(n, x);
  std::cout.precision(5) ;
  std::cout <<std::fixed;
  std::cout << result;
}