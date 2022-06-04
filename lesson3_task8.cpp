#include <iostream>
int main() 
{
  int A,B;
  double C,D;
  std::cin >> A >> B >> C >> D;
  double sum=A*C-B/D;
  std::cout << sum << std::endl;
}