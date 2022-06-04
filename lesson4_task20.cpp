#include <iostream>

int main() 
{
  int A,B,C,D;
  std::cin >> A >> B >> C >> D;
  if (A==-D && (!(B==-C))) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}