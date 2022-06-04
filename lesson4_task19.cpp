#include <iostream>

int main() 
{
  int A,B,C,D;
  std::cin >> A >> B >> C >> D;
  if (A>C) {
    std::cout << (A*D)-(B+C) << std::endl;
  } else if (C>A) {
    std::cout << (B+D)*A << std::endl;
  } else {
    std::cout << A+B+C+D << std::endl;
  }
}