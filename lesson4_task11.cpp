#include <iostream>

int main()
{
  unsigned int a,b;
  std::cin >> a >> b;
  if(a==b) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}