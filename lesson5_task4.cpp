#include <iostream>

int main()
{
  int x;
  int a=2;
  int i;
  std::cin >> x;
  std::cout << a << " ";
  for ( i = 2; i<=x; i++)
    for (int j=2; j<i; j++){
      if (i % j == 0) 
        break;
      else if (i == j+1){
      std::cout << i << " ";
      }
  }
}