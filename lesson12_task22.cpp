#include <iostream>

int aeb(int a, int b) {
  if (b == 0){
    return a;
  }
  return aeb(b, a % b);
}

int main() 
{
  int a, b;
  std::cin >> a >> b;
  int div = aeb(a, b);
  std::cout << div;

  return 0;
}