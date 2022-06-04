#include <iostream>

int main() 
{
  double A,B,C;
  std::cin >> A >> B >> C;
  if(A>=B && A<C && B<C){
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
}