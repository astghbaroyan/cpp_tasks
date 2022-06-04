#include <iostream>

int main() 
{
  int a,b,c,d;
  std::cin >> a >> b >> c >> d;
  if(a>=b && b>=c && c>=d){
    std::cout << "YES\n";
  } else   {
    std::cout << "NO\n";
  }
}